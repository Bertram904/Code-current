#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string ma, ten;
		int s;
	friend istream& operator >> (istream &in, SinhVien &a)
	{
		scanf ("\n");
		getline(cin, a.ma);
		getline(cin, a.ten);
		cin >> a.s;
		return in;
	}
	friend ostream& operator << (ostream &out, SinhVien a)
	{
		cout << a.ma << " " << a.ten << " " << a.s << endl;
		return out;
	}
};
bool cmp (SinhVien a, SinhVien b)
{
	if (a.s == b.s)
	{
		return a.ma < b.ma;
	}
	return a.s > b.s;
}
void sapxep (SinhVien a[], int n)
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
	int q; cin >> q;
	while (q--)
	{
		int x, y; cin >> x >> y;
		for (int i = 0; i < n; i++)
		{
			if (a[i].s >= x && a[i].s <= y)
			{
				cout << a[i];
			}
		}
	}
	return 0;
}