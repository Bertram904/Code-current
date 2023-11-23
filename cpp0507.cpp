#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc (ll a, ll b)
{
	if (b == 0) return a;
	else return uc(b, a % b);
}
ll bc(ll a, ll b)
{
	return a * b/uc(a, b);
}
struct PhanSo{
     ll tu, mau;	
};
void nhap (PhanSo &p)
{
	cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p)
{
	ll l = uc(p.tu, p.mau);
	p.tu/=l;
	p.mau/=l;
}
PhanSo tong (PhanSo p, PhanSo q)
{
	ll mc = bc(p.mau, q.mau);
	p.tu = mc/p.mau * p.tu;
	q.tu = mc/q.mau * q.tu;
	p.tu += q.tu;
	p.mau =  mc;
	rutgon(p);
	return p;
}
void in(PhanSo a)
{
	cout << a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}