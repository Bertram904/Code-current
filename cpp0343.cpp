#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s; getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> v;
		while (ss >> token)
		{
			v.push_back(token);
		}
		int c = 0, l = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if ((stoi(v[i])) % 2 == 0) ++c;
			else ++l;
		}
		if ((v.size() % 2 != 0 && c < l))
		{
			cout <<"YES";
		}
		else if (v.size() % 2 == 0 && c > l) cout <<"YES\n";
		else cout <<"NO";
		cout << endl;
	}
}