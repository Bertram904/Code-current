#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int res = INT_MAX;
		for (int i = 1; i < n; i++)
		{
			if (abs(a[i] + a[i-1]) < abs(res))
			{
				res = a[i] + a[i-1];
			}
		}
		cout << res;
		cout << endl;
}
}