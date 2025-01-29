#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    string sorted = "";
    for (char c = 'A'; c < 'A' + N; c++) {
        int pos = sorted.length();
        for (int i = 0; i < sorted.length(); i++) {
            cout << "? " << sorted[i] << " " << c << endl;
            string response;
            cin >> response;
            if (response == "<") {
                pos = i;
                break;
            }
        }
        sorted.insert(sorted.begin() + pos,c);
    }
    
    cout << "! " << sorted << endl;
    return 0;
}
