#include <bits/stdc++.h>
using namespace std;
int ok = 1;
class SinhVien{
	public:
		string ma, ten, lop, ns;
		double gpa;
	friend istream& operator >> (istream &in, SinhVien &a)
	{
		scanf ("\n");
		string s = to_string(ok++);
		while (s.size() < 3)
		{
			s = "0" + s;
		}
		a.ma = "B20DCCN" + s;
		string name;
		getline(cin, name);
		stringstream ss(name);
		a.ten = "";
		while (ss >> name)
		{
			name[0] = toupper(name[0]);
			for (int i = 1; i < name.size(); i++)
			{
				name[i] = tolower(name[i]);
			}
			a.ten += name;
			a.ten += " ";
		}
		a.ten.pop_back();
		cin >> a.lop >> a.ns >> a.gpa;
		if (a.ns[1] == '/')
		{
			a.ns = "0" + a.ns;
		}
		if (a.ns[4] == '/')
		{
			a.ns.insert(3, "0");
		}
		return in;
	}
	friend ostream& operator << (ostream &out, SinhVien a)
	{
		cout << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl; 
		return out;
	}
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}