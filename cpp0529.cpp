#include <bits/stdc++.h>
using namespace std;
int ok = 1;
struct SinhVien{
	string stt, msv, ten, lop, em, dn;
};
void nhap (SinhVien &a)
{
	scanf ("\n");
	string s = to_string(ok++);
	a.stt = s;
	getline(cin, a.msv);
	getline(cin, a.ten);
	getline(cin, a.lop);
	getline(cin, a.em);
	getline(cin, a.dn);
}
bool cmp(SinhVien a, SinhVien b)
{
	return a.msv < b.msv;
}
void sapxep (SinhVien a[], int n)
{
	sort(a, a + n, cmp);
}
void in (SinhVien a)
{
	cout << a.stt << " " << a.msv << " " << a.ten << " " << a.lop << " " << a.em << " " << a.dn << endl;
}
int main()
{
	int n; cin >> n;
	SinhVien a[n];
	for (int i = 0; i < n; i++)
	{
		nhap(a[i]);
	}
	sapxep(a, n);
	int q; cin >> q;
	while (q--)
	{
		string x; cin >> x;
		for (int i = 0; i < n; i++)
		{
			if (a[i].dn == x)
			{
				in(a[i]);
			}
		}
		cout << endl;
	}
	return 0;
}