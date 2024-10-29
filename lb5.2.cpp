
#include <iostream> 
 
using namespace std; 
 
int main() { 
    long long oddnum = 1;   
    for (int i = 2; i <= 20; i += 2) { 
        oddnum *= i;   
    } 
    cout << "sum of odd number from 1 to 20 = " << oddnum << endl; 
 
    return 0; 
}
