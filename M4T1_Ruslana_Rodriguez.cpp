/*
 CSC 134
 M4T1 - While Loops: Autumn Mushroom Forest
 Ruslana Rodriguez
 October 26, 2026
*/

#include <iostream>
using namespace std;

int main()
{
    // Program 5-3: Say hello five times using a while loop.
    int greetingCount = 0;

    cout << "Program 5-3: Greetings from the Fall Forest" << endl;
    while (greetingCount < 5)
    {
        cout << "Hello from the red and orange mushroom forest!" << endl;
        greetingCount++;
    }

    cout << endl;

    // Program 5-6: Display numbers and their squares.
    int number = 1;

    cout << "Program 5-6: Mushroom Forest Squares" << endl;
    cout << "Number\tSquare" << endl;
    cout << "----------------" << endl;

    while (number <= 10)
    {
        cout << number << "\t" << number * number << endl;
        number++;
    }

    return 0;
}
