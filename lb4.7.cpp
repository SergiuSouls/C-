#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(void)
{
 double num1 = 2.3;
 double num2 = 2.3;
 double num3 = 2.123456;
 double num4 = 2.123456;
 double num5 = 2.123456;
 cout << fixed << setprecision(1) << num1 << endl;
  cout << fixed << setprecision(2) << num2 << endl;
   cout << fixed << setprecision(6) << num3 << endl;
    cout << fixed << setprecision(2) << num4 << endl;
     cout << fixed << setprecision(0) << num5 << endl;
  return 0;
}