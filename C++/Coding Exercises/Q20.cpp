#include <iostream>
#include <string>
using namespace std;

int main() {
    string unformatted_full_name{"StephenHawking"};

    // 1) init from another string: {source, start_index, length}
    string first_name{unformatted_full_name, 0, 7};   // "Stephen"

    // 2) assignment with substr
    string last_name = unformatted_full_name.substr(7); // "Hawking"

    // 3) concatenate with +
    string formatted_full_name = first_name + last_name; // "StephenHawking"

    // 4) insert a space between first and last name
    formatted_full_name.insert(first_name.size(), " ");  // "Stephen Hawking"

    cout << formatted_full_name << '\n';
}

