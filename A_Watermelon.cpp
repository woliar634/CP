#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin >> w;
    
    // Check if w is even and greater than 2
    if (w % 2 == 0 && w > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
