#include <iostream>
using namespace std;

int findMaxElement(int* arr, int size);

int main() {
    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findMaxElement(arr, size) << "\n";   // prints 67
}

// Returns the maximum element using pointer iteration.
int findMaxElement(int* arr, int size) {
    // size >= 1 by constraint
    int* p   = arr;           // current pointer
    int* end = arr + size;    // one past the last element

    int maxVal = *p++;        // start with first element
    for (; p < end; ++p) {
        if (*p > maxVal) maxVal = *p;
    }
    return maxVal;
}
