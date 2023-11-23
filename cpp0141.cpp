#include <bits/stdc++.h>
using ll = long long;
ll fibo[93];
void f()
{
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2; i <= 92; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}
using namespace std;
int main()
{
	f();
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		int ok = 0;
		for (int i = 0; i <= 92; i++)
		{
			if (fibo[i] == n)
			{
				ok = 1;
				break;
			}
		}
		if (!ok) cout << "NO\n";
		else cout <<"YES\n";
	}
}