#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten;
	string ns;
	float a, b, c;
};
void nhap(ThiSinh &p)
{
	getline(cin, p.ten);
	cin >> p.ns >> p.a >> p.b >> p.c;
}
void in (ThiSinh p)
{
	cout << p.ten << " " << p.ns << " " << fixed << setprecision(1) << (p.a + p.b + p.c);
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}