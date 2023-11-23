#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc (ll a, ll b)
{
	if (b == 0) return a;
	return uc(b, a % b);
}
ll bc (ll a, ll b)
{
	return a * b/ uc(a, b);
}
struct PhanSo{
	ll tu, mau;
};
void rutgon(PhanSo &a)
{
	ll l = uc(a.tu, a.mau);
	a.tu /= l;
	a.mau /= l;
}
void process (PhanSo a, PhanSo b)
{
	PhanSo c;
	ll ngo = bc(a.mau, b.mau);
	c.tu  = ngo/a.mau * a.tu + ngo/b.mau * b.tu;
	c.mau = ngo;
	rutgon(c);
	c.tu *= c.tu;
	c.mau *= c.mau;
	rutgon(c);
	cout << c.tu << "/" << c.mau << " ";
	PhanSo d;
	rutgon(a);
	rutgon(b);
	rutgon(c);
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
	rutgon(d);
	cout << d.tu << "/" << d.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}