#include <iostream>
#include <cstring>

int main() {
    const char first_name[] = "Bjarne";
    const char last_name[]  = "Stroustrup";

    // Enough space for "BjarneStroustrup" + '\0'
    char whole_name[ sizeof(first_name) + sizeof(last_name) - 1 ];

    // Lengths of individual names
    size_t first_name_length = std::strlen(first_name);
    size_t last_name_length  = std::strlen(last_name);

    // Build whole_name = first_name + last_name (no space)
    std::strcpy(whole_name, first_name);
    std::strcat(whole_name, last_name);

    // Length of whole_name
    size_t whole_name_length = std::strlen(whole_name);

    // (Optional) Display results
    std::cout << "first_name_length = " << first_name_length << '\n'
              << "last_name_length  = " << last_name_length  << '\n'
              << "whole_name        = " << whole_name        << '\n'
              << "whole_name_length = " << whole_name_length << '\n';
}
