#include <iostream>
#include <string>
#include <math.h>
int main()
{
double a;
double b;    
std::cout << "a is = ? ";
std::cin >> a;
std::cout << "b is = ?";
std::cin >> b;
double pi = M_PI;
double p1 = 0.5 * ((1 - cos(b * pi)) / (1 - sin(a * pi)));
double p2 = 0.3 *((1 +cos (a * pi)) / (1 + sin(b * pi)));
double exponent = pow((p1 + p2), 1.5);
double result = exp(exponent);
std::cout << "result is - " << result << std::endl;
return 0;
}