
/*
CSC 134
M3LAB1 - Pay It Forward: Double the Gift
Ruslana Rodriguez
October 12, 2026
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function declarations
void keepPrize(int prizeValue);
void givePrize(int prizeValue);

int main()
{
    int choice;
    int prizeValue;

    // Seed the random number generator
    srand(time(0));

    // Generate a mystery prize between $1 and $1000
    prizeValue = rand() % 1000 + 1;

    // Display the game introduction
    cout << "Welcome to Pay It Forward!" << endl;
    cout << "--------------------------" << endl;
    cout << "Congratulations! You won a mystery prize!" << endl;
    cout << "The prize is worth between $1 and $1000." << endl;
    cout << "However, you do not know its exact value." << endl;
    cout << "You must make a decision before finding out!" << endl;

    // Display the choices
    cout << "\nWhat will you do?" << endl;
    cout << "1. Keep the mystery prize" << endl;
    cout << "2. Give the prize away and double its value" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Determine the player's decision
    if (choice == 1)
    {
        keepPrize(prizeValue);
    }
    else if (choice == 2)
    {
        givePrize(prizeValue);
    }
    else
    {
        cout << "\nInvalid choice!" << endl;
        cout << "Please enter 1 or 2." << endl;
    }

    cout << "\nThank you for playing Pay It Forward!" << endl;

    return 0;
}

// Function definitions

void keepPrize(int prizeValue)
{
    cout << "\nYou decided to keep the prize!" << endl;
    cout << "Your mystery prize was worth $" << prizeValue << endl;
    cout << "Congratulations! The prize is yours!" << endl;
    cout << "If you had given it away, someone else" << endl;
    cout << "would have received $" << prizeValue * 2 << endl;
}

void givePrize(int prizeValue)
{
    int doubledValue;

    doubledValue = prizeValue * 2;

    cout << "\nYou decided to pay it forward!" << endl;
    cout << "The original prize was worth $" << prizeValue << endl;
    cout << "You gave up $" << prizeValue << " for yourself." << endl;
    cout << "The prize doubled in value!" << endl;
    cout << "Someone else receives $" << doubledValue << endl;
    cout << "Your generosity made someone's day!" << endl;
}
