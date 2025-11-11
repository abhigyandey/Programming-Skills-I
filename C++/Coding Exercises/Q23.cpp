#include <iostream>
#include <cmath>      // for std::round
using namespace std;

// ---- Function prototypes (declared at the top) ----
double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);

// Provided driver-style function (calls the converters)
void temperature_conversion(double fahrenheit_temperature) {
    // Declare & initialize using the functions
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature  = fahrenheit_to_kelvin(fahrenheit_temperature);

    cout << "Fahrenheit: " << fahrenheit_temperature << '\n';
    cout << "Celsius   : " << celsius_temperature << '\n';
    cout << "Kelvin    : " << kelvin_temperature << '\n';
}

// (Optional) simple main to demonstrate
int main() {
    double f;
    cout << "Enter Fahrenheit temperature: ";
    if (cin >> f) {
        temperature_conversion(f);
    }
    return 0;
}

// ---- Full function definitions (at the bottom) ----
double fahrenheit_to_celsius(double temperature) {
    // (5.0/9.0)*(temperature - 32), then round the result
    return std::round((5.0 / 9.0) * (temperature - 32));
}

double fahrenheit_to_kelvin(double temperature) {
    // (5.0/9.0)*(temperature - 32) + 273, then round the result
    return std::round((5.0 / 9.0) * (temperature - 32) + 273);
}
