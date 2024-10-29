
#include <iostream> 
#include <cmath>  
 
using namespace std; 
 
int main() { 
    double a, b, h; 
    cout << "Enter value of a: "; 
    cin >> a; 
    cout << "Enter value of b: "; 
    cin >> b; 
    cout << "Enter value of h: "; 
    cin >> h; 
 
    cout << "---------------------\n"; 
    cout << ":  X  :  Y  :\n"; 
    cout << "---------------------\n"; 
 
    for (double x = a; x <= b; x += h) { 
        double denominator = x + 7 ;  
        if (denominator == 0) {  
            cout << "Value of x does not belong to the domain x = " << x << "\n"; 
            continue; 
        } 
 
        double y = (5 * pow(x, 2) - 7 * x + 3) / (x + 7) - pow(x, 2) - 13 * cos(x); 
        cout << ": " << x << " : " << y << " :\n"; 
    } 
 
    cout << "---------------------\n"; 
 
    return 0; 
}
