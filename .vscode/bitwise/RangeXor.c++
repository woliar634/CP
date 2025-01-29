#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pxor(n + 1, 0); // Prefix XOR (1-based indexing)

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pxor[i] = pxor[i - 1] ^ x; // Compute prefix XOR
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << (pxor[r] ^ pxor[l - 1]) << endl; // Answer the query in O(1)
    }

    return 0;
}
