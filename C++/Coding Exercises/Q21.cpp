#include <iostream>
#include <string>
using namespace std;

int main() {
    string journal_entry_1 = "Isaac Newton";
    string journal_entry_2 = "Leibniz";

    // Remove first name (and the space) from journal_entry_1 → "Newton"
    size_t sp = journal_entry_1.find(' ');
    if (sp != string::npos)
        journal_entry_1.erase(0, sp + 1);

    // If journal_entry_2 is lexicographically less, swap them
    if (journal_entry_2 < journal_entry_1)
        journal_entry_1.swap(journal_entry_2);

    cout << journal_entry_1 << '\n' << journal_entry_2 << '\n';
    return 0;
}
