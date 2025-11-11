#include <iostream>
using namespace std;

// --- Prototypes (same name, different parameter lists) ---
int    find_area(int side_length);                 // square: int -> int
double find_area(double length, double width);     // rectangle: (double,double) -> double

// Uses the overloaded functions
void area_calc() {
    int    square_area     = find_area(2);           // side_length = 2
    double rectangle_area  = find_area(4.5, 2.3);    // length=4.5, width=2.3

    cout << "Square area: "    << square_area    << '\n';
    cout << "Rectangle area: " << rectangle_area << '\n';
}

// (Optional) demo runner
int main() {
    area_calc();
    return 0;
}

// --- Definitions (at the bottom) ---
int find_area(int side_length) {
    // area of square = side^2
    return side_length * side_length;  // (pow not needed for ints)
}

double find_area(double length, double width) {
    // area of rectangle = length * width
    return length * width;
}
