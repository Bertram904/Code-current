#include <bits/stdc++.h>
using namespace std;
int check(string &s)
{
	int sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		sum += s[i] - '0';
	}
	return (sum && sum % 9 == 0);
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << check(s);
		cout << endl;
	}
}