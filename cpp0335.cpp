#include <bits/stdc++.h>
using namespace std;
void solve(string s)
{
	int res = INT_MIN;
	int sum = 0;
	for (char x : s)
	{
		if (isdigit(x))
		{
			sum = sum * 10 + x - '0';
		}
		else{
			res = max(res, sum);
			sum = 0;
		}
	}
	res = max(res, sum);
	cout << res;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		solve(s);
		cout << endl;
	}
}