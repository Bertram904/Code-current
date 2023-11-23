#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string msv;
		string ten, lop, em;
		friend istream& operator >> (istream &in, SinhVien &a)
		{
			scanf("\n");
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
bool cmp (SinhVien a, SinhVien b)
{
	if (a.lop == b.lop)
	{
		return a.msv < b.msv;
	}
	else return a.lop < b.lop;
}
void sapxep(SinhVien a[], int n)
{
	sort(a, a + n, cmp);
}
int main()
{
	int n; cin >> n;
	SinhVien a[n];
	for (int i = 0; i < n; i++)
	{
	cin >> a[i];
	}
	sapxep(a, n);
	for (int i = 0; i < n; i++)
	{
		cout  << a[i];
	}
	return 0;
}