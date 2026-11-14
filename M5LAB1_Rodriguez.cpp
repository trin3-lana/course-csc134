#include <iostream>
#include <limits>
using namespace std;

// Function prototypes
void main_menu();
void cook_pizza();
void cook_burger();
void cook_pasta();
int get_choice(int min_choice, int max_choice);

int main()
{
    cout << "===================================\n";
    cout << "     COOKING CHAOS RESTAURANT      \n";
    cout << "===================================\n";
    cout << "\nWelcome to your new restaurant!\n";
    cout << "You are the head chef. Hungry customers are waiting!\n";
    cout << "Can you become a master chef?\n";

    main_menu();
    return 0;
}

// Keep asking until the player chooses a valid menu option.
int get_choice(int min_choice, int max_choice)
{
    int choice;
    while (true)
    {
        cout << "Enter your choice: ";
        if (cin >> choice && choice >= min_choice && choice <= max_choice)
        {
            return choice;
        }
        cout << "Invalid choice! Please try again.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void main_menu()
{
    cout << "\nWhat would you like to cook?\n";
    cout << "1. Make a pizza\n";
    cout << "2. Cook a burger\n";
    cout << "3. Prepare pasta\n";
    cout << "4. Close the restaurant\n";

    int choice = get_choice(1, 4);
    if (choice == 1)
    {
        cook_pizza();
    }
    else if (choice == 2)
    {
        cook_burger();
    }
    else if (choice == 3)
    {
        cook_pasta();
    }
    else
    {
        cout << "\nRestaurant closed! Thanks for playing!\n";
    }
}

// Story branch 1: Pizza
void cook_pizza()
{
    cout << "\nA customer orders a pizza!\n";
    cout << "What topping will you use?\n";
    cout << "1. Pepperoni\n";
    cout << "2. Pineapple\n";
    int choice = get_choice(1, 2);

    if (choice == 1)
    {
        cout << "\nThe customer loves the pepperoni!\n";
        cout << "You earn a five-star review!\n";
    }
    else
    {
        cout << "\nThe customer sees pineapple!\n";
        cout << "They start a debate about pizza!\n";
        cout << "At least the pizza tastes good!\n";
    }
    cout << "\nTHE END!\n";
}

// Story branch 2: Burger
void cook_burger()
{
    cout << "\nA hungry customer wants a burger!\n";
    cout << "How will you prepare it?\n";
    cout << "1. Cook it thoroughly\n";
    cout << "2. Serve it raw\n";
    int choice = get_choice(1, 2);

    if (choice == 1)
    {
        cout << "\nThe burger is cooked perfectly!\n";
        cout << "The customer leaves a big tip!\n";
    }
    else
    {
        cout << "\nThe customer sees the raw burger!\n";
        cout << "They send it back immediately!\n";
        cout << "You must cook it before serving!\n";
    }
    cout << "\nTHE END!\n";
}

// Story branch 3: Pasta
void cook_pasta()
{
    cout << "\nA customer orders pasta!\n";
    cout << "Which sauce will you choose?\n";
    cout << "1. Alfredo sauce\n";
    cout << "2. Tomato sauce\n";
    int choice = get_choice(1, 2);

    if (choice == 1)
    {
        cout << "\nThe Alfredo pasta is delicious!\n";
        cout << "The customer asks for seconds!\n";
    }
    else
    {
        cout << "\nThe tomato pasta smells amazing!\n";
        cout << "The customer recommends your restaurant!\n";
    }
    cout << "\nTHE END!\n";
}
