#include <iostream>
#include <string>
#include <math.h>
int main()
{
double x;    
std::cout << "x is = ";
std::cin >> x;
double Y;
if(x>=0){
    Y = cos(x)- pow(sin(x),3);
}else{
    Y = x * exp(-x) + 1 / (x - 1.3);
    }
std::cout << "result is = " << Y << std::endl;
return 0;
}
