#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if (n<2)
    return false;
    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
        return false;
    }
    return true;
}
int main (){
    int num;
    cout << "Enter num: ";
    cin >> num;
    if (isPrime(num))
    cout << num << " its a simple number";
    else
    cout << num << " its a not a simple number";
    return 0;
}