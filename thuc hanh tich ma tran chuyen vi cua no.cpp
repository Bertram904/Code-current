#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int n, m; cin >> n >> m;
		int a[n][m], b[m][n], c[n][n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				b[j][i] = a[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < m; k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}