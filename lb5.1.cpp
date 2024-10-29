
#include <iostream> 
#include <cmath>   
 
using namespace std; 
 
int main() { 
    const int n = 5;   
    double x[n], y[n]; 
    cout << "Enter 5 value of x:\n"; 
    for (int i = 0; i < n; i++) { 
        cout << "x[" << i + 1 << "] = "; 
        cin >> x[i]; 
    } 
    for (int i = 0; i < n; i++) { 
        y[i] = pow(sin(x[i]), 5) + fabs(5 * x[i] - 1.5); 
    } 
    cout << "Result:\n"; 
    for (int i = 0; i < n; i++) { 
        cout << "value of y for x[" << i + 1 << "] = " << y[i] << endl; 
    } 
 
    return 0; 
}
