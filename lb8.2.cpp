#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {5, -3, 8, 0, -8, 7, 4, -1, 1, -6, 2, 9};
     cout << "Initial array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

 int maxElement = *max_element(arr.begin(), arr.end());
    cout << "Max element is: " << maxElement << endl;

    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == maxElement) {
            break;
        }
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Array after change: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}






