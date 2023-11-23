#include <bits/stdc++.h>
using namespace std;
int cnt[1000002];
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n; int a[n]; int dem = 0;
		memset(cnt, 0, sizeof(cnt));
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cnt[a[i]]++;
		}
		for (int i = 0; i < n; i++)
		{
			if (cnt[a[i]] > 1)
			{
				++dem;
			}
		}
		cout << dem;
		cout << endl;
		
	}
}