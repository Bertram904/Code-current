#include <bits/stdc++.h>
using namespace std;
int check1 (string s)
{
	int l = s.size();
	for (int i = 0; i < l; i++)
	{
		if (s[i] != s[l - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}
int check2(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] - '0') % 2 != 0) return 0;
	}
	return 1;
}
int main()
{
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s; cin >> s;
		if (check1(s) && check2(s)) cout <<"YES\n";
		else cout <<"NO\n";
	}
}