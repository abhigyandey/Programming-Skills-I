#include <iostream>
#include <string>

// Returns a new string with characters of `str` in reverse order.
// Pointer-based implementation: reads from front, writes from back.
std::string reverse_string(const std::string& str) {
    const std::size_t n = str.size();
    std::string out(n, '\0');              // allocate result of same size

    const char* src = str.data();          // read pointer (front → back)
    char* dst = out.data() + n;            // write pointer (starts one past end)

    for (std::size_t i = 0; i < n; ++i) {
        *--dst = *src++;                   // move dst backward, src forward
    }
    return out;
}

int main() {
    // Basic demo
    std::string input = "Hello, World!";
    std::string reversed = reverse_string(input);

    std::cout << "Input   : " << input    << '\n';
    std::cout << "Reversed: " << reversed << '\n';

    // A couple more quick checks
    std::cout << reverse_string("")         << '\n';      // empty -> empty
    std::cout << reverse_string("a")        << '\n';      // single char
    std::cout << reverse_string("racecar")  << '\n';      // palindrome
    std::cout << reverse_string("C++ Pointers!") << '\n';

    return 0;
}
