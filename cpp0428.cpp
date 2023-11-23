#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			v.push_back(x);
		}
		for (int i = 0; i < m; i++)
		{
			int y; cin >> y;
			v.push_back(y);
		}
		sort(v.begin(), v.end());
		for (int it : v)
		{
			cout << it << " ";
		}
		cout << endl;
	}
}