/*
 CSC 134
 M3HW1 - Gold
 Ruslana Rodriguez
 October 20, 2026
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Question 1 - Gladiator Chatbot
    string response;

    cout << "QUESTION 1 - GLADIATOR CHATBOT" << endl;
    cout << "Hello! I am Marcus Aurelius!" << endl;
    cout << "ARE YOU NOT ENTERTAINED? (yes or no)" << endl;
    cin >> response;

    if (response == "yes")
    {
        cout << "Then let the games continue!" << endl;
    }
    else if (response == "no")
    {
        cout << "IF NOT, SEND IN A LION!" << endl;
        cout << "ROARRRR!" << endl;
    }
    else
    {
        cout << "The crowd remains undecided!" << endl;
    }

    cout << endl;

    // Question 2 - Receipt Calculator (adapted from M2T2)
    string item = "salad";
    double item_price;
    const double tax_percent = 0.08;
    const double tip_percent = 0.15;
    double tax_amount;
    double tip_amount = 0.0;
    double total;
    int order_type;

    cout << "QUESTION 2 - RECEIPT CALCULATOR" << endl;
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;
    cout << "Enter the price of your meal: $";
    cin >> item_price;

    if (!cin || item_price < 0)
    {
        cout << "Invalid meal price." << endl;
        return 1;
    }

    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> order_type;
    if (!cin || (order_type != 1 && order_type != 2))
    {
        cout << "Invalid order type." << endl;
        return 1;
    }

    tax_amount = item_price * tax_percent;

    if (order_type == 1)
    {
        tip_amount = item_price * tip_percent;
    }
    else
    {
        tip_amount = 0.0;
    }

    total = item_price + tax_amount + tip_amount;
    cout << fixed << setprecision(2);
    cout << "Thank you for shopping with us!" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t\t$" << item_price << endl;
    cout << "Tax\t\t$" << tax_amount << endl;
    cout << "Tip\t\t$" << tip_amount << endl;
    cout << "------------------------------" << endl;
    cout << "Total Due:\t$" << total << endl;
    cout << endl;

    // Question 3 - Choose Your Own Adventure: The Fall of Rome
    int choice1;
    int choice2;

    cout << "QUESTION 3 - THE FALL OF ROME!" << endl;
    cout << "You are Marcus, a gladiator of Rome!" << endl;
    cout << "The Emperor has ruled with tyranny." << endl;
    cout << "You decide it is time to overthrow Rome!" << endl;
    cout << "What will you do?" << endl;
    cout << "1. Attack Rome alone." << endl;
    cout << "2. Gather an army of gladiators." << endl;
    cin >> choice1;

    if (choice1 == 1)
    {
        cout << "You charge toward Rome alone!" << endl;
        cout << "The Roman legion surrounds you." << endl;
        cout << "Your rebellion has failed! GAME OVER!" << endl;
    }
    else if (choice1 == 2)
    {
        cout << "You gather an army of gladiators!" << endl;
        cout << "Thousands join your rebellion." << endl;
        cout << "The gates of Rome stand before you!" << endl;
        cout << "1. Charge the gates!" << endl;
        cout << "2. Rally the citizens against the Emperor!" << endl;
        cin >> choice2;

        if (choice2 == 1)
        {
            cout << "The Roman army holds the gates!" << endl;
            cout << "DEFEAT! Rome survives!" << endl;
        }
        else if (choice2 == 2)
        {
            cout << "The citizens rise against the Emperor!" << endl;
            cout << "The Emperor is overthrown!" << endl;
            cout << "VICTORY! ROME HAS FALLEN!" << endl;
        }
        else
        {
            cout << "Invalid choice. Game Over!" << endl;
        }
    }
    else
    {
        cout << "Invalid choice. Game Over!" << endl;
    }

    cout << endl;

    // Question 4 - Math Practice
    int number1;
    int number2;
    int userAnswer;
    int correctAnswer;

    srand(static_cast<unsigned int>(time(0)));
    number1 = rand() % 10;
    number2 = rand() % 10;
    correctAnswer = number1 + number2;

    cout << "QUESTION 4 - MATH PRACTICE" << endl;
    cout << "What is " << number1 << " plus " << number2 << "?" << endl;
    cin >> userAnswer;

    if (!cin)
    {
        cout << "Invalid answer." << endl;
        return 1;
    }
    if (userAnswer == correctAnswer)
    {
        cout << "Correct! Great job!" << endl;
    }
    else
    {
        cout << "Incorrect! The correct answer is " << correctAnswer << "." << endl;
    }

    cout << "Thank you for completing M3HW1!" << endl;
    return 0;
}
