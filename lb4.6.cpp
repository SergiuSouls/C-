#include <iostream>
#include <string>
using namespace std;
int main(void)
{
  bool answer;
  int value;
  cout <<"Enter value: ";
  cin >> value;
  answer = (value >= 0 && value < 10)||
  (value * 2 < 20 && value * 2 - 2 > -2)||
  (value - 1 > 1 && value / 2 < 10)||
  (value == 111);
  cout << (answer ? "That true" : "That not true") << endl;
  return 0;
}