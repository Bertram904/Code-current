#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		map<char, int> mp;
		int n = s.size();
		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}
		int res = 0;
		for (int i = 0; i < s.size(); i++)
		{
			res = max(res, mp[s[i]]);
		}
		if (2 * res - n > 1) cout <<"0";
		else cout <<"1";
		cout << endl;
	}
}