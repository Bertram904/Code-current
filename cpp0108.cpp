#include <bits/stdc++.h>
using namespace std;
int nt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return n > 1;
}
int c1 (int n)
{
	while (n > 9)
	{
		if (n % 10 <= (n/10 % 10)) return 0;
		n/=10;
	}
	return 1;
}
int c2 (int n)
{
	while (n > 9)
	{
		if (n % 10 >= (n/10 % 10)) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int x = pow(10, n - 1);
		int y = pow(10, n) - 1;
		int dem = 0;
		for (int i = x; i <= y; i++)
		{
			if (c1(i) || c2(i))
			{
				if (nt(i)) ++dem;
			}
		}
		cout << dem;
		cout << endl;
	}
}