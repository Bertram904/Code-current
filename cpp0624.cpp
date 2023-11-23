#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string msv, ten, lop, em;
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
		string x; getline(cin, x);
		for (int i = 0; i < x.size(); i++)
		{
			x[i] = toupper(x[i]);
		}
		cout << "DANH SACH SINH VIEN NGANH " << x << ":" << endl;
		for (int i = 0; i < n; i++)
		{
			if (a[i].msv[5] == x[0] && a[i].msv[6] == x[3])
			{
				cout << a[i] << endl;
			}
		}
		cout << endl;
	}
}