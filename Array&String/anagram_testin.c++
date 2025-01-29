#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare the sorted strings
    if (s == t) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}