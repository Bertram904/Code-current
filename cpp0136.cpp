#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> v(1e6 + 1, 1);
void sang()
{
	v[0] = v[1] = 0;
	for (int i = 2; i <= sqrt(1e6); i++)
	{
		if (v[i])
		{
			for (int j = i * i; j <= 1e6; j+=i)
			{
				v[j] = 0;
			}
		}
	}
}
int main()
{
	sang();
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n; int d = 0;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (v[i])
			{
				++d;
			}
		}
		cout << d;
		cout << endl;
	}
}