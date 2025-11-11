#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    if (n < 0) n = -n;
    if (n == 0) return 0;
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    cout << sum_of_digits(1234) << "\n"; // 10
    cout << sum_of_digits(5678) << "\n"; // 26
    cout << sum_of_digits(9999) << "\n"; // 36
    cout << sum_of_digits(1000) << "\n"; // 1
}