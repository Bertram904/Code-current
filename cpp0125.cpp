#include <bits/stdc++.h>
using namespace std;
vector <int> v(1e6+1, 1);
void sang(){
	v[0] = v[1] = 0;
	for (int i = 2; i <= 1000; i++)
	{
		if (v[i])
		{
			for (int j = i * i; j  <= 1e6; j+=i)
			{
				v[j] = 0;
			}
		}
	}
}
int main()
{
	sang();
	int a, b; cin >> a >> b;
	for (int i = a + 1; i < b; i++)
	{
		if (v[i])
		{
			cout << i << " ";
		}
	}
}