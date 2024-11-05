#include <iostream>
using namespace std;

int main() {
    int c0;
    cout << "Enter a positive integer: ";
    cin >> c0;

    if (c0 <= 0) {
        cout << "Please enter a non-zero positive integer." << endl;
        return 1;
    }

    int steps = 0;

    while (c0 != 1) {
        cout << c0 << endl;
        if (c0 % 2 == 0) {  // Check if c0 is even
            c0 = c0 / 2;    // If even, divide by 2
        } else {            // Otherwise, it's odd
            c0 = 3 * c0 + 1; // If odd, multiply by 3 and add 1
        }
        steps++; // Increment the step count
    }

    cout << c0 << endl; // Output the final 1
    cout << "steps = " << steps << endl;

    return 0;
}
