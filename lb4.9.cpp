#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(void)
{
int num1, num2, num3 ,num4;
cout << " Enter four number from 1 to 255: "<< endl;
cin >> num1 >> num2 >> num3 >> num4;
if ((num1 >= 1 && num1 <= 255)&&
(num2 >= 1 && num2 <= 255)&&
(num3 >= 1 && num3 <= 255)&&
(num4 >= 1 && num4 <= 255))
{
cout << "IP adress is : " << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
}else{
    cout << "out of range"<< endl;
}
  return 0;
}