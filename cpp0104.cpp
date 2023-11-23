#include <bits/stdc++.h>
using namespace std;
long long gt (int n)
{
	long long s = 1;
	for (int i = 2 ; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
int main(){
	int n; cin >> n; long long sum = 1;
	for (int i = 2; i <= n; i++)
	{
		sum += gt(i);
	}
	cout << sum;
}