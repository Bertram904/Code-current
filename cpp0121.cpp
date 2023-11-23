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
	while(t--)
	{
		ll a, b; cin >> a >> b;
		cout << bc(a, b) << " " << uc(a, b);
		cout << endl;
	}
}