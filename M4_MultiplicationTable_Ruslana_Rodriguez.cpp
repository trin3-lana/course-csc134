/*
CSC 134
Multiplication Table - Gold
Ruslana Rodriguez
November 1, 2026
*/

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int number;
    int counter = 1;

    cout << "Construction Material Calculator" << endl;
    cout << "Enter materials needed per section (1-12): ";

    // Keep asking until the input is a whole number from 1 to 12.
    while (!(cin >> number) || number < 1 || number > 12)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter a number from 1 to 12: ";
    }

    // Print the total materials needed for 1 through 12 sections.
    while (counter <= 12)
    {
        cout << number << " times " << counter
             << " is " << number * counter << "." << endl;
        counter++;
    }

    return 0;
}
