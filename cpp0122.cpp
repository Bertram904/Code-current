#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc (ll a, ll b)
{
	if (b == 0) return a;
	return uc(b, a % b);
}
ll bc(ll a, ll b)
{
	return a*b/uc(a, b);
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int res = 1;
		for (int i = 2; i <= n; i++)
		{
			res = bc(res, i);
		}
		cout << res;
		cout << endl;
	}
}