#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int a[100001];
int cmp (int a, int b)
{
	if (mp[a] != mp[b])
	{
		return mp[a] > mp[b];
	}
	else return a < b;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		sort(a, a + n, cmp);
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		mp.clear(); // dung map toan cuc cac test case bi chong len nhau gay sai ket qua
	}
}