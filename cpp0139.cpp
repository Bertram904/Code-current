#include <bits/stdc++.h>
using namespace std;
int s(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n/=10;
	}
	return sum;
}
int s1(int n)
{
	int sum1 = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
			sum1 += s(i);
			n /= i;
		}
		
		}
	}
	if (n != 1) sum1 += s(n);
	if (sum1 == s(n)) return 1;
	else return 0;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		if (s1(n)) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	} 
}