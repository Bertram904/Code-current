#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv, ten, lop, em;
	public:
		string getMa();
		friend istream& operator >> (istream &in, SinhVien &a)
		{
			scanf ("\n");
			in >> a.msv;
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.em;
			return in;
		}
		friend ostream& operator << (ostream &out, SinhVien a)
		{
			cout << a.msv << " " << a.ten << " " << a.lop << " " << a.em << endl;
			return out;
		}
};
string SinhVien :: getMa()
{
	return this -> msv;
 } 
bool cmp (SinhVien a, SinhVien b)
{
	return a.getMa() < b.getMa();
}
void sapxep(SinhVien a[], int n)
{
	sort(a, a + n, cmp);
}
int main()
{
	int n = 0;
	SinhVien ds[1001], x;
	while (cin >> x)
	{
		ds[n++] = x;
	}
	sapxep(ds, n);	
	for (int i = 0; i < n; i++)
	{
		cout << ds[i];
	}
	return 0;
}