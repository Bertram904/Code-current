#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		set<int> se; int ok = 0; int res;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			if (se.find(x) != se.end())
			{
				res = x;
				ok = 1;
				break;
			}
			se.insert(x);
		}
		if (!ok) cout << "-1";
		else cout << res;
		cout << endl;
	}
}