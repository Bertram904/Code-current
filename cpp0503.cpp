#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc(ll a, ll b)
{
	if (b == 0) return a;
	return uc(b, a % b);
}
struct PhanSo{
	ll tu, mau;
};

void nhap(PhanSo &p)
{
	cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
	ll l = uc(p.tu, p.mau);
	p.tu /= l;
	p.mau/=l;
}

void in(PhanSo p)
{
	cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}