#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

map <string, string> theloai;
int stttl = 1;
class TheLoai{
    public:
        string maTL, tenTL;
    friend istream& operator >> (istream& is, TheLoai &a) {
        scanf("\n");
        getline(is, a.tenTL);
        // xu li ma the loai 
        string s = to_string(stttl++);
        while(s.length() < 3) {
            s = "0" + s;
        }
        s = "TL" + s;
        theloai[s] = a.tenTL;
        return is;
    }
};

int sttp = 1;
class Phim {
    public:
        string maPhim, maTL, tenPhim, date;
        int soTap;
        int ng, th, nm;
    friend istream& operator >> (istream& is, Phim &a) {
        is >> a.maTL;
        is >> a.date;
        // xu li ngay
        a.ng = stoi(a.date.substr(0, 2));
        a.th = stoi(a.date.substr(3, 2));
        a.ng = stoi(a.date.substr(6, 4));
        is.ignore();
        getline(is, a.tenPhim);
        is >> a.soTap;
        // xu li ma phim
        string s = to_string(sttp++);
        while(s.length() < 3) {
            s = "0" + s;
        }
        a.maPhim = "P" + s;
        return is;
    }  
    friend ostream& operator << (ostream& os, Phim a) {
        os << a.maPhim << " " << theloai[a.maTL] << " " << a.date << " " << a.tenPhim << " " << a.soTap << endl;
        return os;
    }  
};

bool cmp1(Phim a, Phim b) {
    if(a.nm != b.nm) return a.nm < b.nm;
    if(a.nm == b.nm && a.th != b.th) return a.th < b.th;
    if(a.nm == b.nm && a.th == b.th) return a.ng < b.ng;
    if(a.tenPhim != b.tenPhim) return a.tenPhim < b.tenPhim;
    return a.soTap > b.soTap;
}

void process(TheLoai tl[], int n, Phim p[], int m) {
    sort(p, p + m, cmp1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();
    TheLoai tl[100];
    Phim p[1000];
    for (int i = 0; i < n; i++) {
        cin >> tl[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    process(tl, n, p, m);
    for (int i = 0; i < m; i++) {
        cout << p[i];
    }
}