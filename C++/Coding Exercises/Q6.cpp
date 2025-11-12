#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare and initialize vector
    vector<int> vec = {10, 20, 30, 40, 50};

    // Modify first and last elements
    vec[0] = 100;               // first element
    vec[vec.size() - 1] = 1000; // last element

    // Display the vector
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
