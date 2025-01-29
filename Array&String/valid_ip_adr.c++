#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    //int n = s.length();
    int dotCount = 0;
    int start = 0;

    // Traverse the string to check each segment
    for (int i = 0; i <= s.size(); i++) {
        // If we reach a dot or end of the string
        if (i == s.size() || s[i] == '.') {
            dotCount++;
            
            // Extract the current segment
            string segment = s.substr(start, i - start);

            // Check if the segment is empty or too long
            if (segment.empty() || segment.length() > 3) {
                cout << "NO" << endl;
                return 0;
            }

            // Check for leading zeros
            if (segment.length() > 1 && segment[0] == '0') {
                cout << "NO" << endl;
                return 0;
            }

            // Convert the segment to an integer
            int num = stoi(segment);

            // Check if the segment is within the valid range [0, 255]
            if (num < 0 || num > 255) {
                cout << "NO" << endl;
                return 0;
            }

            // Update the start index for the next segment
            start = i + 1;
        }
    }

    // Valid IP address must have exactly 4 segments (3 dots)
    if (dotCount == 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}