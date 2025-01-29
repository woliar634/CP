#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long maxXorSum = 0;
    const int x = (1 << 31) - 1; // This is 2147483647

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        maxXorSum += (a ^ x);
    }
    
    cout << maxXorSum << endl;
    return 0;
}