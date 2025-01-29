#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    //cout << "Enter the XOR value and the size of the array: ";
    cin >> x >> n;

    int current_xor = 0;
    //cout << "Enter the elements of the current array: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        current_xor ^= num;  // Calculate XOR of the current array
    }

    // Compare current_xor with the memorized XOR value x
    if (current_xor == x) {
        cout << "Relax" << endl;
    } else {
        cout << "Theif" << endl;
    }

    return 0;
}