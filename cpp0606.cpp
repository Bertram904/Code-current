#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv;
		string ten, gt, ns, dc, mst, nk;
	public :
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator << (ostream &out, NhanVien a);
};
istream& operator >> (istream &in, NhanVien &a){
	a.mnv = "00001";
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	cin.ignore();
	getline(in, a.dc);
	cin >> a.mst >> a.nk;
	return in;
}
ostream& operator << (ostream &out, NhanVien a)
{
	cout << a.mnv << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nk; 
	return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}