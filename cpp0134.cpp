#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		vector<int> v;
		for (int i = 2; i <= sqrt(n); i++)
		{
			while (n % i == 0)
			{
				v.push_back(i);
				n/=i;
			}
		}
		if (k > v.size()) cout <<"-1";
		else cout << v[k-1];
		cout << endl;
	}
}