#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int N = 5;
void fillM(int* matrix, int size) {
    for(int* p = matrix; p < matrix + size * size; p++){
        *p=rand() % 100;
    }
}
void printM(int* matrix, int size) {
    for(int* p = matrix; p < matrix + size * size; p++){
        cout << "";
        if ((p - matrix + 1) % size == 0) cout << endl;
    }
}
void countEvenAndOdd (int* matrix, int size) {
    cout << "Main Diagonal: ";
    for (int i = 0; i < size ; i++){
        cout << *(matrix + i * size + i) << "";
    }
    cout << endl;
    
    cout << "Side Diagonal: ";
    for (int i = 0; i < size; i++)
    cout << *(matrix + i * size + (size - 1 - i)) << "";
   
    cout << endl;
    int even = 0 , odd = 0;
    for(int* p = matrix; p < matrix + size * size ; p++){
    (*p % 2 == 0) ? even++ : odd++;
    }
    cout << "Even: " << even << "   " << "Odd: " << odd << endl;
}
int main(void) {
 srand(time(0));
 int* matrix = new int [N * N];
 fillM(matrix , N);
 printM(matrix , N);
 countEvenAndOdd(matrix , N);
 
 delete[] matrix;

return 0;

}
