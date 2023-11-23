// chia het cho 11 tong cac chu so hang le - tong cac chu so hang chan chia het cho 11
#include <bits/stdc++.h>
using namespace std;
void check(string s)
{
	int c = 0, l = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0) l += s[i] - '0';
		else c += s[i] - '0';
	}
	if ((l - c) % 11 == 0) cout << "1";
	else cout <<"0";
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		check(s);
		cout << endl;
	}
}