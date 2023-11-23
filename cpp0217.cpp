#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int v[n*n];
		for (int i = 0; i < n * n; i++)
		{
			cin >> v[i];
		}
		sort(v, v + n * n);
		cout << v[k-1];
		cout << endl;
	}
}