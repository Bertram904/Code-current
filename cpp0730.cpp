#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll s = 0, res = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			s = max(x, s + x);
			res = max(res, s);
		}
		cout << res;
		cout << endl;
	}
}