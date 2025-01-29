#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long max_xor = (1LL << 31) - 1; // 2^31 - 1
    long long sum = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += (max_xor ^ a);
    }
    
    cout << sum << endl;
    return 0;
}
