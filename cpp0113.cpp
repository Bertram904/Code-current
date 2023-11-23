#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int y = n % 10;
		n/=10;
		int x = n % 10;
		if (x * 10 + y == 86) cout <<"1";
		else cout <<"0";
		cout << endl;
	}
}