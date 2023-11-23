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
		stringstream ss1(s1);
		stringstream ss2(s2);
		string token1;
		string token2;
		set<string> se1;
		set<string> se2;
		while (ss1 >> token1)
		{
			se1.insert(token1);
		}
		while (ss2 >> token2)
		{
			se2.insert(token2);
		}
		for (auto y : se1)
		{
			if (se2.find(y) == se2.end())
			{
				cout << y << " ";
			}
		}
		cout << endl;
	}
}