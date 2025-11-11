#include <iostream>
#include <string>
using namespace std;

// --- Prototypes ---
void print_guest_list(const string& guest_1, const string& guest_2, const string& guest_3);
void clear_guest_list(string& guest_1, string& guest_2, string& guest_3);

// Orchestrator: call print → clear → print
void event_guest_list(string& guest_1, string& guest_2, string& guest_3) {
    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);
}

// (Optional) demo
int main() {
    string guest_1 = "Alice", guest_2 = "Bob", guest_3 = "Charlie";
    event_guest_list(guest_1, guest_2, guest_3);
    return 0;
}

// --- Definitions ---
void print_guest_list(const string& guest_1, const string& guest_2, const string& guest_3) {
    cout << guest_1 << '\n'
         << guest_2 << '\n'
         << guest_3 << '\n';  // ensure newline after guest_3
}

void clear_guest_list(string& guest_1, string& guest_2, string& guest_3) {
    guest_1 = " ";
    guest_2 = " ";
    guest_3 = " ";
}
