#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
using ll = long long;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, x; cin >> n >> x; int a[n];
		ll res = 0, lt = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = n-1; i >= 0; i--)
		{
			res += lt*a[i];
			res %= mod;
			lt *= x;
			lt %= mod;
		}
		cout << res;
		cout << endl;
	}
}