#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        int n;
        cin >> n;  // Read the number of pillars for the current test case
        vector<int> h(n);

        // Read the heights of the pillars
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        // We will count the minimum number of changes needed
        int operations = 0;

        // Start from the end of the array and move towards the front
        for (int i = n - 2; i >= 0; i--) {
            // If the current height is greater than the next one, adjust it
            if (h[i] > h[i + 1]) {
                // We need to decrease h[i] to be at most h[i + 1]
                operations += h[i] - h[i + 1];
                h[i] = h[i + 1];  // Adjust the height to make it non-decreasing
            }
        }

        // Output the result for the current test case
        cout << operations << endl;
    }
    return 0;
}
