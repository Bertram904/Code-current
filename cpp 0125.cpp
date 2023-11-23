#include <bits/stdc++.h>
using namespace std;
void sang(int l, int r)
{
	int p[r-l+1];
	for (int i = 0; i <= r-l+1; i++)
	{
		p[i] = 1;
	}
	for (int i = 2; i <= sqrt(r); i++)
	{
			for (int j = max(i*i, (l + i - 1)/i*i); j <= r; j += i)
			{
				p[j-l] = 0;
			}
	}
	for (int i = max(2, l); i <= r; i++)
	{
		if (p[i-l]) cout << i << " ";
	}
}
int main()
{
	int a, b; cin >> a >> b;
	sang(a, b);
}