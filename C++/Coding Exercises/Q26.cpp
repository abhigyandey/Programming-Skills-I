#include <iostream>
#include <string>
using namespace std;

// --- Prototypes ---
void print_guest_list(const std::string guest_list[], size_t guest_list_size);
void clear_guest_list(std::string guest_list[], size_t guest_list_size);

// Calls the required functions in order
void event_guest_list(std::string guest_list[], size_t guest_list_size) {
    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
}

// (Optional) demo driver
int main() {
    std::string guests[] = {"Alice", "Bob", "Charlie", "Diana"};
    size_t n = sizeof(guests) / sizeof(guests[0]);
    event_guest_list(guests, n);
    return 0;
}

// --- Definitions (at the bottom) ---
void print_guest_list(const std::string guest_list[], size_t guest_list_size) {
    for (size_t i = 0; i < guest_list_size; ++i) {
        cout << guest_list[i] << '\n';
    }
}

void clear_guest_list(std::string guest_list[], size_t guest_list_size) {
    for (size_t i = 0; i < guest_list_size; ++i) {
        guest_list[i] = " "; // single space
    }
}
