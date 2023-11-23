#include <bits/stdc++.h>
using namespace std;
void check ()
{
	string s; cin >> s;
	for (int i = 1; i < s.size(); i++)
	{
		if (abs(s[i] - s[i - 1]) != 1)
        {
            cout <<"NO\n";
            return;
        }
	}
	cout <<"YES\n";
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		check();
	}
}