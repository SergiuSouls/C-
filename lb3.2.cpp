#include <iostream>
#include <string>

int main()
{
    int val;
  std::cout << "enter number from 0 up to 5 ";
  std::cin >> val;
  if(val < 0 || val > 5){
      std::cout << "number out of range";
      return 1;
  }
  switch (val){
      case 0:
      std::cout << " нуль , zero" <<std::endl;
      break;
      case 1:
      std::cout << " один , one" <<std::endl;
      break;
      case 2:
      std::cout << " два , two" <<std::endl;
      break;
      case 3:
      std::cout << " три , three" <<std::endl;
      break;
      case 4:
      std::cout << " чотири , four" <<std::endl;
      break;
      case 5:
      std::cout << " п'ять , five" <<std::endl;
      break;
      default:
      std::cout << "number out of range" <<std::endl;
      break;
  }
  return 0;
}