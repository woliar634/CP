#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[100][100], B[100][100], C[100][100] = {0};

    // Input matrices A and B
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> B[i][j];

    // Matrix multiplication
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            for (int k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];

    // Output the resulting matrix C
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}

