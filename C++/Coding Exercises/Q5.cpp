#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of 10 integers to 0
    int arr[10] = {0};

    // Assign values to first and last elements
    arr[0] = 100;      // first element
    arr[9] = 1000;     // last element (index 9 because array indices start at 0)

    // Display the array
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
