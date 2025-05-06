#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isLeap(int year) {
 return(year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0);
}
int main(void) {
for(int yr = 1995; yr<2036; yr++)
cout << yr << "->" << isLeap(yr) << endl;
return 0;
}