#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];

    // Input the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    // Initialize the smallest missing positive integer
    int smallest_missing = 1;

    // Find the smallest missing positive integer
    for (int i = 0; i < n; ++i) {
        if (arr[i] == smallest_missing) {
            ++smallest_missing; // Move to the next expected positive integer
        }
    }

    // Output the result
    cout << smallest_missing << endl;

    return 0;
}
