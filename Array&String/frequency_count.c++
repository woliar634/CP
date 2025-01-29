#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int A[100000];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A, A + n);
    int frequency[101] = {0};
    for (int i = 0; i < n; i++) {
        frequency[A[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        if (frequency[i] > 0) {
            cout << i << " " << frequency[i] << endl;
        }
    }
    return 0;
}
