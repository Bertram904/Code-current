#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int s = 0; int res = INT_MIN;
		int idx;
		for (int i = 0; i < k; i++)
		{
			s+=a[i];
		}
		for (int i = 1; i < n - k + 1; i++)
		{
			s = s - a[i-1] + a[i + k - 1];
			if (s > res)
			{
				res = s;
				idx = i;
			}
		}
		for (int i = 0; i < k; i++)
		{
			cout << a[i+idx] << " ";
		}
		cout << endl;
	}
}