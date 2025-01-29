#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,cp;
    cin >> s;
    int cnt = 1; 
    for (int i = 0; i < s.size(); i++) {
        if (i == s.size() - 1 || s[i] != s[i + 1]) {
            cp += s[i];
            cp += to_string(cnt);
            cnt = 1;
        } else {
            cnt++;
        }
    } 
    cout << cp << endl;
    return 0;
}