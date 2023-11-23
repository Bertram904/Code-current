#include <bits/stdc++.h>
using namespace std;
int ok = 1;
class NhanVien{
	private:
		string msv;
		string ten,gt, ns, dc, mst, nk;
	public:
		friend istream& operator >> (istream &in, NhanVien &a)
		{
			scanf ("\n");
		     string s = to_string(ok++);
			 while (s.size() < 5)
			 {
			 	s = "0" + s;
			 }	
			 a.msv = s;
			 getline(in, a.ten);
			 in >> a.gt >> a.ns;
			 in.ignore();
			 getline(in, a.dc);
			 in >> a.mst >> a.nk;
			 return in;
		}
		friend ostream& operator << (ostream &out, NhanVien a)
		{
			cout << a.msv << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nk << endl;
			return out;
		}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}