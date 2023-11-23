#include <bits/stdc++.h>
using namespace std;
int ok = 1;
class NhanVien{	
	public:
		string mnv;
		string ten, gt, dc, mst, nk;
		int m, d, y;
		friend istream& operator >> (istream &in, NhanVien &a)
		{
			scanf("\n");
			string s = to_string(ok++);
			while (s.size() < 5)
			{
				s = "0" + s;
			}
			a.mnv = s;
			getline(in, a.ten);
			cin >> a.gt;
			scanf ("%d/%d/%d", &a.m, &a.d, &a.y);
			scanf ("\n");
			getline(in, a.dc);
			cin >> a.mst >> a.nk;
			return in;
		}
		friend ostream& operator << (ostream &out, NhanVien a)
		{
			cout << a.mnv << " " << a.ten << " " << a.gt << " ";
			printf ("%.2d/%.2d/%.4d ", a.m, a.d, a.y);
			cout << a.dc << " " << a.mst << " " << a.nk << endl;
			return out;
 		}
};

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
void sapxep(NhanVien a[], int n)
{
	sort(a, a + n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}