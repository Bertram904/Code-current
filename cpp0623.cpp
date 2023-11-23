#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	public :
		string msv;
		string ten, lop, em;
	friend istream& operator >> (istream &in, SinhVien &a)
	{
		scanf ("\n");
		getline(cin, a.msv);
		getline(cin, a.ten);
		getline(cin, a.lop);
		getline(cin, a.em);
		return in;
	}
	friend ostream& operator << (ostream &out, SinhVien a)
	{
		cout << a.msv << " " << a.ten << " " << a.lop << " " << a.em << endl;
		return out;
	}
};
int main()
{
	int n; cin >> n;
	SinhVien a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int q; cin >> q;
	while (q--)
	{
		string x; cin >> x;
		cout << "DANH SACH SINH VIEN KHOA " << x << ":" << endl;
		for (int i = 0; i < n; i++)
		{
			if (a[i].lop[1] == x[2] && a[i].lop[2] == x[3])
			{
				cout << a[i];
			}
		}
	}
}