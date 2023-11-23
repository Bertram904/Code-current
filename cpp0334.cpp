#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int sum = 0;
		int res = 0;
		for (char x : s)
		{
			if (isdigit(x))
			{
				sum = sum * 10 + x - '0';
			}
			else{
				res += sum;
				sum = 0;
			}
		}
		res += sum;
		cout << res;
		cout << endl;
	}
}