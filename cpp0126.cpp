#include <bits/stdc++.h>
using namespace std;
vector<int> v(1e4+1, 1);
void sang()
{
	for (int i = 0; i <= 1e4; i++)
	{
		v[i] = 1;
	}
	v[0] = v[1] = 0;
	for (int i = 2; i <= 100; i++)
	{
		if (v[i])
		{
			for (int j = i * i; j <= 1e4; j+=i)
			{
				v[j] = 0;
			}
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		sang();
		int a, b; cin >> a >> b;
		for (int i = a; i <= b; i++)
		{
			if (v[i])
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
}