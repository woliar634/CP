#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    
    while (true) {
        y++;
        int temp = y;
        bool distinct = true;
        int digits[10] = {0};
        
        while (temp > 0) {
            int digit = temp % 10;
            if (digits[digit] == 1) {
                distinct = false;
                break;
            }
            digits[digit] = 1;
            temp /= 10;
        }
        
        if (distinct) {
            cout << y << endl;
            break;
        }
    }
    
    return 0;
}