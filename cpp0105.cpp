#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int ok = 1;
		while (n > 0)
		{
			int x = n % 10;
			if (x != 6 && x != 8 && x != 0)
			{
				ok = 0;
			}
			n/=10;
		}
		if (ok) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}