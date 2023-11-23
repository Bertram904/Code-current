#include <bits/stdc++.h>
using namespace std;
string a = "ABBADCCABDCCABD";
string b = "ACCABCDDBBCDDBB";
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		float diem = 0;
		if (n == 101)
		{
			for (int i = 0; i < 15; i++)
			{
				char x; cin >> x;
				if (x == a[i])
				{
					diem += 2.0/3;
				}
			}
		}
		else if (n == 102)
		{
			for (int i = 0; i < 15; i++)
			{
				char y; cin >> y;
				if (y == b[i])
				{
					diem += 2.0/3;
				}
			}
		}
		cout << fixed << setprecision(2) << diem;
		cout << endl;
	}
}