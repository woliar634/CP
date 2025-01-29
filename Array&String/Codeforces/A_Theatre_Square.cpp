#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    
    // Calculate the number of flagstones needed along the length and width
    long long numFlagstonesLength = (n + a - 1) / a;
    long long numFlagstonesWidth = (m + a - 1) / a;
    
    // Total number of flagstones
    cout << numFlagstonesLength * numFlagstonesWidth << endl;
    
    return 0;
}
