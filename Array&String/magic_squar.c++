#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    int magicSum = 0;
    for (int j = 0; j < n; j++) {
        magicSum += A[0][j];
    }
    bool isMagic = true;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j];
        }
        if (rowSum != magicSum) {
            isMagic = false;
            break;
        }
    }
    if (isMagic) {
        for (int j = 0; j < n; j++) {
            int colSum = 0;
            for (int i = 0; i < n; i++) {
                colSum += A[i][j];
            }
            if (colSum != magicSum) {
                isMagic = false;
                break;
            }
        }
    }
    if (isMagic) {
        int primaryDiagonalSum = 0;
        for (int i = 0; i < n; i++) {
            primaryDiagonalSum += A[i][i];
        }
        if (primaryDiagonalSum != magicSum) {
            isMagic = false;
        }
    }
    if (isMagic) {
        int secondaryDiagonalSum = 0;
        for (int i = 0; i < n; i++) {
            secondaryDiagonalSum += A[i][n - 1 - i];
        }
        if (secondaryDiagonalSum != magicSum) {
            isMagic = false;
        }
    }
    if (isMagic) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

