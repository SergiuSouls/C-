using namespace std;
#include <iostream>

int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int* start = vector;
    int* end = vector + sizeof(vector) / sizeof(vector[0]);

    int minElement = *start;

    for (int* ptr = start + 1; ptr < end; ++ptr) {
        if (*ptr < minElement) {
            minElement = *ptr;
        }
    }

    cout << minElement;
    return 0;
}