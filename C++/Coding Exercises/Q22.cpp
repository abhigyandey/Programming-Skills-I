#include <bits/stdc++.h>
using namespace std;

int main() {
    double bill_total;
    cin >> bill_total;
    
    int number_of_guests;
    cin >> number_of_guests;
    
    double individual_bill = bill_total/number_of_guests;
    
    int individual_bill_1 = floor(individual_bill);
    int individual_bill_2 = round(individual_bill);
    double individual_bill_3 = ceil(individual_bill*100)/100;
    
    cout << "The individual bill at location 1:" << individual_bill_1 << "\n";
    cout << "The individual bill at location 2:" << individual_bill_2 << "\n";
    cout << "The individual bill at location 3:" << individual_bill_3 << "\n";

}
