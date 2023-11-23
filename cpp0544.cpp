#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct Point{
    double x, y;
};
double d (Point a, Point b)
{
    return sqrt(pow(a.x - b.x, 2) +pow(a.y - b.y, 2));
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        Point a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double x1 = d(a, b), x2 = d(a, c), x3 = d(b, c);
        if (x1 + x2 > x3 && x1 + x3 > x2 && x2 + x3 > x1)
        {
            double s = 1.0/4*sqrt((x1 + x2 + x3)*(x1 + x2 - x3) * (x1 + x3 - x2) * (x2 + x3 - x1));
            double r = x1 * x2 * x3/(4 * s);
            double res = PI * r * r;
            cout << fixed << setprecision(3) << res;
        }
        else{
            cout << "INVALID";
        }
        cout << endl;
    }
}