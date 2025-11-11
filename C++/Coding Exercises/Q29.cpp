#include <iostream>
#include <iomanip>
using namespace std;

// --- Prototype: n days, starting amount (defaults to a penny) ---
double a_penny_doubled_everyday(int n, double amount = 0.01);

// Calls the function for n = 25 and stores result
void amount_accumulated() {
    int days = 25;
    double total_amount = a_penny_doubled_everyday(days);  // uses default 0.01
    cout << fixed << setprecision(2)
         << "After " << days << " days: $" << total_amount << '\n';
}

// Optional demo
int main() {
    amount_accumulated();
    // quick checks:
    cout << "Day 18: $" << fixed << setprecision(2)
         << a_penny_doubled_everyday(18) << '\n'; // 1310.72
    return 0;
}

// --- Definition ---
double a_penny_doubled_everyday(int n, double amount) {
    // Base case: day 1 → current amount
    if (n <= 1) return amount;

    // Recursive case: move to next day by doubling the amount
    return a_penny_doubled_everyday(n - 1, amount * 2.0);
}
