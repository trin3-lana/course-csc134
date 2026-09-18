/*
 CSC 134
 M2T2 - Receipt Calculator
 Ruslana Rodriguez
 September 17, 2026
*/

#include <iostream>
#include <iomanip> // for 2 decimal tricks
using namespace std;

int main() {
    // Purpose - Create a simple receipt
    // should also handle sales tax (8%)

    // Declare our variables
    string item = "🥗 salad";
    double item_price = 5.99;
    double tax_percent = 0.08; // 8% tax rate
    double tax_amount; // tax in $
    double total; // price + tax

    // Greet user and take the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // Calculate the meal price
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // take 8% of the item
    total = item_price + tax_amount;
    
    
    
    // Print the receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t$" << item_price      << endl;
    cout << "Tax" << "\t\t$" << tax_amount   << endl;
    cout << "------------------------------" << endl;
    cout << "Total Due:" << "\t\t$" << total << endl;
    cout << endl;

    return 0;// no errors
}