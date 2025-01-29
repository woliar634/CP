#include <bits/stdc++.h>
using namespace std;

// Function to count the number of digits in a number
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int n) {
    int numDigits = countDigits(n);  // Get the number of digits
    int sum = 0, temp = n;

    // Calculate the sum of each digit raised to the power of numDigits
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);  // Raise digit to the power of numDigits and add to sum
        temp /= 10;
    }

    // If the sum equals the original number, it's an Armstrong number
    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
