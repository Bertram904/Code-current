#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc (ll a, ll b)
{
	if (b == 0) return a;
	else return uc(b, a % b);
}
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll t, ll m)
		{
			tu = t;
			mau = m;
		}
		void rutgon()
		{
			ll l = uc(tu, mau);
			tu/=l;
			mau/=l;
		}
		friend istream& operator  >> (istream &in, PhanSo &a){
			in >> a.tu >> a.mau;
			return in;
		}
		friend ostream& operator << (ostream &out, PhanSo a)
		{
			cout << a.tu << "/" << a.mau;
			return out;
		}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}