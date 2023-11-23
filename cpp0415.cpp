#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[n];
		int b[m];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		int x = *min_element(b, b + m);
		int y = *max_element(a, a + n);
		cout << 1ll * x * y;
		cout << endl;
	}
}