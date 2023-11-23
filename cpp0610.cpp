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
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll t = 0, ll m = 1){
			tu = t;
			mau = m;
		}
		friend istream& operator >> (istream &in, PhanSo &a)
		{
			in >> a.tu >> a.mau;
			return in;
		}
		friend ostream& operator << (ostream &out, PhanSo a)
		{
			cout << a.tu << "/" << a.mau;
			return out;
		}
		friend PhanSo operator + (PhanSo a, PhanSo b)
		{
			PhanSo tong;
			ll mc = bc(a.mau, b.mau);
			tong.tu = mc/a.mau * a.tu + mc/b.mau*b.tu;
			tong.mau = mc;
			ll l = uc(tong.tu, tong.mau);
			tong.tu/=l;
			tong.mau/=l;
			return tong;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}