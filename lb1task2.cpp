#include <iostream>
#include <string>
#include <math.h>
int main()
{
double a;
double b;    
std::cout << "a is = ";
std::cin >> a;
std::cout << "b is = ";
std::cin >> b;
double p1 = (1.3 * sin(a) + cos(b));
double p2 = (0.81 * sin(b) + 1.1 * cos(a));
double exponent = (b / a);
double result = exp(p1 / p2) * exponent;
std::cout << "result is - " << result << std::endl;
return 0;
}