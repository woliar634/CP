#include <bits/stdc++.h>
using namespace std;
int main() {
    int x = 50;
    int* p = &x;
    int** q = &p;
    **q = 100;
    cout << x;
    return 0;
}