#include <iostream>
using namespace std;

// Function prototypes
void showWelcome();
double calculateTotal(double price, int quantity);

int main()
{
    showWelcome();

    double itemPrice = 12.50;
    int numberOfItems = 4;
    double total = calculateTotal(itemPrice, numberOfItems);

    cout << "Price per item: $" << itemPrice << endl;
    cout << "Number of items: " << numberOfItems << endl;
    cout << "Total cost: $" << total << endl;

    return 0;
}

// Void function: prints a welcome message
void showWelcome()
{
    cout << "Welcome to Ruslana's Basic Functions Program!" << endl;
}

// Value-returning function: calculates the total cost
double calculateTotal(double price, int quantity)
{
    return price * quantity;
}
