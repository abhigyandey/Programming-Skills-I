#include <iostream>
using namespace std;

void multiply_with_pointer(int* ptr, int multiplier) {
    if (!ptr) return;
    *ptr *= multiplier;
}

int main() {
    int x = 7;                 // initial value
    multiply_with_pointer(&x, 3);
    cout << x << "\n";         // prints 21
    return 0;
}