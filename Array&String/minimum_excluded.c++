#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool present[1001] = {false}; // Array to track presence of numbers 1 to 1000

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num >= 1 && num <= 1000)
            present[num] = true; // Mark the number as present
    }

    for (int i = 1; i <= 1000; ++i) {
        if (!present[i]) { // Find the first number that is not present
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}