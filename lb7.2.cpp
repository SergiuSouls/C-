#include <iostream>
using namespace std;

int main() {
    double pi4 = 0.0;  // This will store an approximation of π/4
    long n;            // Number of terms in the series

    cout << "Number of iterations? ";
    cin >> n;

    // Iteratively add terms based on Leibniz's formula
    for (long i = 0; i < n; i++) {
        // Add or subtract each term based on whether i is even or odd
        pi4 += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    cout.precision(20); // Set the precision for printing π to 20 decimal places
    cout << "Pi = " << (pi4 * 4.0) << endl; // Multiply by 4 to approximate π
    return 0;
}
