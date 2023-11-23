#include <bits/stdc++.h>
using namespace std;
struct tg{
      int g, p, s;	
};
void nhap (tg &a)
{
	cin >> a.g >> a.p >> a.s;
}
bool cmp(tg a, tg b)
{
	if (a.g < b.g) return 1;
	if (a.g == b.g)
	{
		if (a.p < b.p) return 1;
		if (a.p == b.p)
		{
			if (a.s < b.s) return 1;
		}
	}
	return 0;
}
void sx (tg a[], int n)
{
	sort (a, a + n, cmp);
}
void in (tg a)
{
	cout << a.g << " " << a.p << " " << a.s << endl;
}
int main()
{
	int n; cin >> n;
	tg a[5000];
	for (int i = 0; i < n; i++)
	{
		nhap(a[i]);
	}
	sx(a, n);
	for (int i = 0; i < n; i++)
	{
		in(a[i]);
	}
	cout << endl;
}