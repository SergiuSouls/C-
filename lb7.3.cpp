#include <iostream>
using namespace std;
int main(void) {
int n;
    const int size = 15; 

    cout << "Enter a positive integer greater than 1: ";
    cin >> n;
    if (n <= 1) {
        cout << "The number must be greater than 1." << endl;
        return 1;
    } else if (n > size) {
        cout << "Too big." << endl;
        return 1;
    }
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < n; i++) {
cout << '|';
for(int j = 0; j < n; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
return 0;

