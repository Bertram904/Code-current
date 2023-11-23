#include <bits/stdc++.h>
using namespace std;
int b[10000005];
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		memset(b, 0, sizeof(b));
		for (int i = 0; i < n - 1; i++)
		{
			int x; cin >> x;
			if (x > 0) b[x] = 1;
		}
		for (int i = 1; i <= 10000001; i++)
		{
			if (b[i] == 0 )
			{
				cout << i;
				break;
			}
		}
		cout << endl;
	}
}