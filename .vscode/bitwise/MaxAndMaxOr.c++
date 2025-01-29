#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max_and = INT_MIN, max_or = 0, num;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        max_and = max(max_and, num); // Maximum AND is the largest element
        max_or |= num; // OR of all elements
    }

    cout << max_and << " " << max_or << endl;
    return 0;
}
