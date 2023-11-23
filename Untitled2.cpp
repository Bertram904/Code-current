#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> v;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			v.push_back(a[i]*a[i]);
		}
		sort(v.begin(), v.end());
		int ok = 0;
		for (int i = 0; i < n - 1; i++)
		{
				if (binary_search(v.begin(), v.end(), a[i]*a[i] + a[i+1]*a[i+1]))
				{
					cout << "YES";
					ok = 1;
					break;
				}
			}
		if (!ok) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}