#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> v;
		while (ss >> token) v.push_back(token);
		if (n == 1){
			chuanhoa(v.back());
			cout << v.back()<< " ";
			for (int i = 0; i < v.size() - 1; i++)
			{
				chuanhoa(v[i]);
				cout << v[i];
				if (i != v.size() - 2) cout << " ";
			}
		}
		else if (n == 2)
		{
			for (int i = 1; i < v.size(); i++)
			{
				chuanhoa(v[i]);
				cout << v[i];
				if (i != 0) cout << " ";
			}
			chuanhoa(v[0]);
			cout << v[0];
		}
		cout << endl;
}
}
