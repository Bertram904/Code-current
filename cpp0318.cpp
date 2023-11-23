#include <bits/stdc++.h>
using namespace std;
int c1(string s)
{
	for (int i = 0; i < 4; i++)
	{
		if (s[i] >= s[i+1]) return 0;
	}
	return 1;
}
int c2(string s)
{
	for (int i = 1; i < 5; i++)
	{
		if (s[i] != s[0]) return 0;
	}
	return 1;
}
int c3(string s)
{
	if (s[0] != s[1] && s[1] != s[2] && s[3] != s[4]) return 0;
	else return 1;
}
int c4(string s)
{
	for (char x : s)
	{
		if (x != 6 && x != 8) return 0;
	}
	return 1;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		string res = s.substr(5, 6);
		res.erase(3,1);
		if (c1(res) || c2(res) || c3(res) || c4(res))
		{
			cout << "YES";
		}
		else cout <<"NO";
		cout << endl;
	}
}