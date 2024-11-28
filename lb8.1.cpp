#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {5, -3, 12, 0, -8, 7, 4, -1, 10, -6, 2, 9};

    cout << "Initial array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> ascending = arr;
    sort(ascending.begin(), ascending.end());
    cout << "Array by growth: ";
    for (int num : ascending) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> descending = arr;
    sort(descending.begin(), descending.end(), greater<int>());
    cout << "Descending array: ";
    for (int num : descending) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}


