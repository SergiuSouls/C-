#import <iostream>
#include <iostream>
#include <cstdlib> 
#include <ctime>  

int main() {
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;

    double* arr = new double[n];

    std::srand(std::time(0));

    for (int i = 0; i < n; ++i) {
        arr[i] = -2.0 + static_cast<double>(std::rand()) / (static_cast<double>(RAND_MAX / (4.0)));
    }

    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    std::cout << "Positiv numbers: " << positiveCount << std::endl;
    std::cout << "Negative numbers: " << negativeCount << std::endl;

    delete[] arr;

    return 0;
}