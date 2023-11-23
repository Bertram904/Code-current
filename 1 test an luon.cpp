#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		ll a[n];
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a[i] = 1ll * x * x;
		}
		sort (a, a + n);
		int ok = 0;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				ll tmp = ll(a[i] + a[j]);
				if (tmp != 0 && binary_search(a + j + 1, a + n, tmp))
				{
					ok = 1;
					break;
				}
			}
		}
		if (!ok) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}