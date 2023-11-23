#include <bits/stdc++.h>
using namespace std;
vector<int> v(1e6+1, 1);
void sang()
{
	v[0] = v[1] = 0;
	for (int i = 2; i <= 1000; i++)
	{
		if (v[i])
		{
			for (int j = i * i; j <= 1e6; j+=i)
			{
				v[j] = 0;
			}
		}
	}
}
void solve()
{
	sang();
	int n; cin >> n; int ok = 0;
	for (int i = 2; i <= n/2; i++)
	{
		if (v[i] && v[n-i])
		{
			cout << i << " " << n - i;
			ok = 1;
			break;
		}
}
if (!ok) cout << "-1";
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
}