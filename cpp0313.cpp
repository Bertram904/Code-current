#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1; getline(cin, s1);
	string s2; cin >> s2;
	stringstream ss(s1);
	string token;
	vector<string> v;
	while (ss >> token)
	{
		v.push_back(token);
	}
	for (auto i : v)
	{
		if (i != s2)
		{
			cout << i << " ";
		}
	}
}