#include <bits/stdc++.h>
using namespace std;
int ok = 1;
class GV{
	public:
		string ma, ten, lop;
	friend istream& operator >> (istream &in, GV &a)
	{
		scanf ("\n");
		string s = to_string(ok++);
		while (s.size() < 2)
		{
			s = "0" + s;
		}
		a.ma = "GV" + s;
		getline(cin, a.ten);
		string ngo;
		getline(cin, ngo);
		a.lop = "";
		stringstream ss(ngo);
		vector<string> v;
		while (ss >> ngo)
		{
			a.lop += toupper(ngo[0]);
		}
		return in;
	}
	friend ostream& operator << (ostream &out, GV a)
	{
		cout << a.ma << " " << a.ten << a.lop << endl;
	}
};
bool cmp (GV a, GV b)
{
	return a.ten[]
}
void sx(GV a[], int n)
{
	sort(a, a + n, cmp);
}
int main()
{
	int n; cin >> n;
	GV a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sx(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}