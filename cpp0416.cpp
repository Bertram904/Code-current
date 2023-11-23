#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n]; int dem = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 1; i < n; i++)
		{
			if (a[i] + a[i-1] == k)
			{
				++dem;
			}
		}
		cout << dem;
		cout << endl;
	}
}