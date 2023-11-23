#include <bits/stdc++.h>
using namespace std;
void min1(string &a, string &b)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '6') a[i] = '5';
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == '6') b[i] = '5';
	}
	cout << stoll(a) + stoll(b);
}
void max1(string &a, string &b)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '5') a[i] = '6';
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == '5') b[i] = '6';
	}
	cout << stoll(a) + stoll(b);
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		min1(a, b); cout << " "; max1(a, b);
		cout << endl;
	}
}