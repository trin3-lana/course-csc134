// CSC 134
// M2T1 - Interactive Tulip Shop
// Ruslana Rodriguez
// September 17, 2026
//We're going to make the simplest possible
// "checkout" machine
#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main() { 

    // Set up all variables
    string first_name, last_name; //holds customer namespace name 
    string product = "tullips"; 
    int amount_purchased; 
    double cost_each = 1.50; 
    double total_cost;


     // Greet the customer
     cout << "Welcome to our " << product << "store!" << endl;
     cout << "What's your first name? ";
     cin >> first_name;
     cout << "What's your last name? ";
     cin >> last_name;
     string full_name = first_name + "" + last_name;
     cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they would like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // Calculate total price
    total_cost = amount_purchased * cost_each;

    // Give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;



    return 0;
}
