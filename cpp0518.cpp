#include <bits/stdc++.h>
using namespace std;
int ok = 1;
struct NhanVien{
	string mnv;
	string ten, gt, dc, mst, nk;
	int d, m, y;
};
void nhap (NhanVien &a)
{
	scanf ("\n");
	string s = to_string(ok++);
	while (s.size() < 5)
	{
		s = "0" + s;
	}
	a.mnv = s;
	getline(cin, a.ten);
	cin >> a.gt;
	scanf ("%d/%d/%d", &a.m, &a.d, &a.y);
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nk;
}
bool cmp (NhanVien a, NhanVien b)
{
	if (a.y < b.y) return 1;
	if (a.y == b.y)
	{
		if (a.m < b.m) return 1;
		if (a.m == b.m)
		{
			if (a.d < b.d) return 1;
		}
	}
	return 0;
}
void sapxep (NhanVien a[], int n)
{
	sort (a, a + n, cmp);
}
void inds(NhanVien a[], int n)
{
	for (int i = 0; i < n; i++)	{
		cout << a[i].mnv << " " << a[i].ten << " " << a[i].gt << " ";
		printf ("%.2d/%.2d/%.4d ", a[i].m, a[i].d , a[i].y);
		cout << a[i].dc << " " << a[i].mst << " " << a[i].nk << endl; 
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}