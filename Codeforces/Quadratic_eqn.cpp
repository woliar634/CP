#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    // Calculate discriminant
    double D = b * b - 4 * a * c;
    
    if (D < 0) {
        // Imaginary roots
        cout << "Imaginary" << endl;
    } 
    else if (D == 0) {
        // Real and Equal roots
        double root = -b / (2.0 * a);
        cout << "Real and Equal" << endl;
        cout << fixed << setprecision(2) << root << endl;
    } 
    else {
        // Real and Unequal roots
        double root1 = (-b + sqrt(D)) / (2.0 * a);
        double root2 = (-b - sqrt(D)) / (2.0 * a);
        
        cout << "Real and Unequal" << endl;
        cout << fixed << setprecision(2) << min(root1, root2) << " " << max(root1, root2) << endl;
    }

    return 0;
}
