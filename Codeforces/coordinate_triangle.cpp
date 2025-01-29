#include <bits/stdc++.h>

#define pb             push_back
#define endl "\n" 
#define fill(x, y)     memset(x, y, sizeof(x))
#define all(x)         (x).begin(), (x).end()
#define debug(x)       { cerr << #x << " = " << x << endl; }
#define IO	       { ios_base::sync_with_stdio(false); cin.tie(0); }
#define read(x)	       freopen(x, "r", stdin)
#define write(x)       freopen(x, "w", stdout)

using namespace std;

typedef long long      ll;
typedef pair<int, int> ii;
typedef vector<int>    vi;


int main() {

    // read("sample2.in");
    // write("sample2.out");

    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;


    // double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    // double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    long long a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    long long b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    long long c = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);

    if (a == b && b == c) {
        cout << "Equilateral Triangle" << endl;
    } else if (a == b || b == c || c == a) {
        cout << "Isosceles Triangle" << endl;
    } else {
        cout << "Scalene Triangle" << endl;
    }


    double aa = sqrtl(a);
    double bb = sqrtl(b);
    double cc = sqrtl(c);

    double s = (aa + bb + cc) / 2;
    double area = sqrtl(s * (s - aa) * (s - bb) * (s - cc));
    double perimeter = aa + bb + cc;
    cout << fixed << setprecision(4);
    cout << area << " " << perimeter << endl;

    return 0;
}











