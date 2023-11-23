#include <bits/stdc++.h>
using namespace std;
int check (int n)
{
	int c = 0, l = 0;
	while (n > 0)
	{
		int x = n % 10;
		if (x % 2 == 0) ++c;
		else ++l;
		n/=10;
	}
	if (c == l) return 1;
	else return 0;
}
int main()
{
	int n; cin >> n;
	if (n % 2 == 0)
	{
		int l = pow(10, n - 1);
		int r = pow(10, n) - 1;
		int dem = 1;
		for (int i = l; i <= r; i++)
		{
			if (check(i)) {
				++dem;
				cout << i << " ";
				if (dem == 10) cout << endl;
				dem%=10;	
			}
		}
	}
}