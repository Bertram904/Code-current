#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
	if (n == 0 || n == 1) return 1;
	int fn, f1 = 1, f2 = 0;
	for (int i = 2; i <= 92; i++)
	{
		fn = f1 + f2;
		if (fn == n) return 1;
		f2 = f1;
		f1 = fn;
	}
	return 0;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			if (check(a[i]))
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}