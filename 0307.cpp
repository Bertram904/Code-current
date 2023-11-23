#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s1; getline(cin, s1);
		string s2; getline(cin, s2);
		map<string, int> mp;
		vector<string> v;
		stringstream ss1(s1);
		string token;
		stringstream ss2(s2);
		while (ss1 >> token) v.push_back(token);
		while (ss2 >> token) v.push_back(token);
		for (int i = 0; i < v.size(); i++)
		{
			mp[v[i]]++;
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (mp[v[i]] == 1)
			{
				cout << v[i] << " ";
			}
		}
		cout << endl;
	}
}