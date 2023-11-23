#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int sum = 0, res = 0;
		multiset<char> se;
		for (char x : s)
		{
			if (isdigit(x))
			{
				sum = sum + x - '0';
			}
			else{
				res += sum;
				sum = 0;
			}
		}
		res += sum;
		for (char x : s)
		{
			se.insert(x);
		}
		for (auto y : se)
		{
			if (isalpha(y))
			{
				cout << y;
			}
		}
		cout << res;
		cout << endl;
	}
}