#include <bits/stdc++.h>
using namespace std;

// Function to generate Fibonacci numbers up to 1e9 and store them in an array
int generateFibonacciNumbers(int fib[]) {
    int a = 0, b = 1;
    fib[0] = a;
    fib[1] = b;
    int idx = 2;
    while (true) {
        int nextFib = a + b;
        if (nextFib > 1e9) break;
        fib[idx++] = nextFib;
        a = b;
        b = nextFib;
    }
    return idx; // Return the number of Fibonacci numbers generated
}

int main() {
    // Precompute all Fibonacci numbers up to 1e9
    int fib[50]; 
    int fibSize = generateFibonacciNumbers(fib);

    int k;
    cin >> k;
    int count = 0;
    
    for (int i = 0; i < k; ++i) {
        int num;
        cin >> num;

        int low = 0, high = fibSize - 1;
        bool found = false;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (fib[mid] == num) {
                found = true;
                break;
            } else if (fib[mid] < num) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (found) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
