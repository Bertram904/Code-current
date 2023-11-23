#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		ll f[1000] = {0};
		for (int i = 0; i < n; i++)
		{
			f[i] = a[i];
			for (int j = 0; j < i; j++)
			{
				if (a[j] < a[i])
				{
				    f[i] = max(f[i], f[i] + a[j]);
				}
			}
		}
		cout << *max_element(f, f + n);
		cout << endl;
	}
}