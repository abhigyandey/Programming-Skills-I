#include <iostream>
using namespace std;

// Reverses the array in-place using pointers.
void reverse_array(int* arr, int size) {
    if (!arr || size <= 1) return;

    int* left  = arr;            // start of array
    int* right = arr + size - 1; // end of array

    while (left < right) {
        int tmp = *left;
        *left   = *right;
        *right  = tmp;

        ++left;
        --right;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, n);

    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    // Output: 5 4 3 2 1
}
