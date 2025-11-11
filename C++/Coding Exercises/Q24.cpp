#include <iostream>
using namespace std;

// --- Prototype: defaults + best order (apples, oranges, mangos) ---
void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);

// Provided function to make the three weekly calls
void modify_grocery_list() {
    // Week 1: use all defaults
    cout << "Week 1:\n";
    print_grocery_list();
    cout << '\n';

    // Week 2: apples = 5 (override first arg only)
    cout << "Week 2 (apples = 5):\n";
    print_grocery_list(5);
    cout << '\n';

    // Week 3: apples = 7, oranges = 11, mangos default
    cout << "Week 3 (apples = 7, oranges = 11):\n";
    print_grocery_list(7, 11);
    cout << '\n';
}

// (Optional) demo
int main() {
    modify_grocery_list();
    return 0;
}

// --- Definition at the bottom ---
void print_grocery_list(int apples, int oranges, int mangos) {
    cout << "Apples : " << apples  << '\n'
         << "Oranges: " << oranges << '\n'
         << "Mangos : " << mangos  << '\n';
}
