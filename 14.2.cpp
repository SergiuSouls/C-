#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int rows = 3, cols = 3;
    
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];

    std::cout << "Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100;
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "Main diagonal: ";
    for (int i = 0; i < rows; i++)
        std::cout << arr[i][i] << " ";
    std::cout << "\n";

    std::cout << "Side diagonal: ";
    for (int i = 0; i < rows; i++)
        std::cout << arr[i][cols - i - 1] << " ";
    std::cout << "\n";

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    std::cout << "Count of even: " << evenCount << "\n";
    std::cout << "Count of odd: " << oddCount << "\n";

    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}