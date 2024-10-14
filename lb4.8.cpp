#include <iostream>
#include <cmath> 

int main() {
    int num1, num2;
    const float EPSILON = 0.000001;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    float result1 = 1.0 / num1;
    float result2 = 1.0 / num2;

    if (std::fabs(result1 - result2) < EPSILON) {
        std::cout << "Results are equal (by 0.000001 epsilon)" << std::endl;
    } else {
        std::cout << "Results are not equal (by 0.000001 epsilon)" << std::endl;
    }

    return 0;
}