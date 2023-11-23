#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int tn(ll n)
{
	ll m = n;
	ll s = 0;
	while (n > 0)
	{
		s = s * 10 + n % 10;
		n/=10;
	}
	if (s == m) return 1;
	else return 0;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		if (tn(n)) cout << "YES\n";
		else cout <<"NO\n";
	}
}