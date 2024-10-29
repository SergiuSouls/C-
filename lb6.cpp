#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter natural digit of N: ";
    cin >> N;

    int product = 1; 
    bool hasNonSevenDigit = false; 

    do {
        int digit = N % 10; 
        if (digit != 7) {
            product *= digit;
            hasNonSevenDigit = true; 
        }
        N /= 10; 
    } while (N > 0);

    if (hasNonSevenDigit) {
        cout << "Multiplied numbers which not a 7: " << product << endl;
    } else {
        cout << "All digits is 7" << endl;
    }

    return 0;
}

