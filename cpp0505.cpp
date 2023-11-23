#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ma = "00001";
	string ten, gt, ns, dc, mst, nk;
};
void nhap (NhanVien &a)
{
	getline(cin,a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nk;
}
void in(NhanVien a)
{
	cout << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nk; 
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}