#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll x, y, p;
		cin >> x >> y >> p;
		ll s = 1;
		for (int i = 0; i < y; i++)
		{
			s = ((s % p) * (x % p)) % p;
		}
		cout << s;
		cout << endl;
	}
}