#include <iostream>
using namespace std;

void swap_pointers(int* ptr1, int* ptr2) {
    int tmp = *ptr1;      // safest approach
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

int main() {
    int a = 5, b = 10;
    int *pa = &a, *pb = &b;

    swap_pointers(pa, pb);

    cout << a << " " << b << "\n";   // 10 5
}