#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int v[n*m];
		for (int i = 0; i < n * m; i++)
		{
			cin >> v[i];
		}
		sort(v, v + n * m);
		for (int i = 0; i < n * m; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}