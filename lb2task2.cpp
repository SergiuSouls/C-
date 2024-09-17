#include <iostream>
#include <string>
#include <math.h>
int main()
{
double x, y;    
std::cout << "cordinates of x and y is - ";
std::cin >> x >> y;
double Y;
if((x >= -1 && x <= 0 && y >= 0 && y <= 1) ||
 (x >= 0 && x <= 1 && y >= -1 && y <= 0)){
    std::cout << "hitting" << std::endl;
}else{
    std::cout << "miss" << std::endl;
    }
return 0;
}