#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten, ns;
	int d, m, y;
	void nhap()
{
	cin >> ten >> ns;
	d = stoi(ns.substr(0,2));
	m = stoi(ns.substr(3,2));
	y = stoi(ns.substr(6,4));
	
}
};

bool cmp(SinhVien a, SinhVien b)
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
void sx(SinhVien a[], int n)
{
	sort(a, a + n, cmp);
}
int main()
{
	int n; cin >> n;
	SinhVien a[n];
	for (int i = 0; i < n; i++)
	{
		a[i].nhap();
	}
	sx(a, n);
	cout << a[n-1].ten << endl << a[0].ten;
}