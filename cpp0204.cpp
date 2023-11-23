#include <bits/stdc++.h>
using namespace std;
vector<int> v(1e5 + 1, 1);
void sang()
{
	v[0] = v[1] = 0;
	for (int i = 2; i <= sqrt(100000); i++)
	{
		if (v[i])
		{
			for (int j = i * i; j <= 1e5; j+=i)
			{
				v[j] = 0;
			}
		}
	}
}
int main()
{
	sang();
	int t; cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b; int dem = 0;
		for (int i = max(2, a); i <= b; i++)
		{
			if (v[i])
			{
				++dem;
			}
		}
		cout << dem << endl;
	}
}