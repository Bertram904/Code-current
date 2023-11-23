#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int a, m; cin >> a >> m;
		int ok = 0;
		for (int i = 0; i < m; i++)
		{
			if (i * a % m == 1)
			{
				cout << i;
				ok = 1;
				break;
			}
		}
		if (!ok) cout <<"-1";
		cout << endl;
	}
}