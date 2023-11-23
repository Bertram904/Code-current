#include <bits/stdc++.h>
using namespace std;

void thuong(string &s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
}

int main()
{
	string s; getline(cin, s);
	thuong(s);
	stringstream ss(s);
	string token;
	vector<string> v;
	while (ss >> token) v.push_back(token);
	cout << v.back();
	for (int i = 0; i < v.size()-1; i++)
	{
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
}