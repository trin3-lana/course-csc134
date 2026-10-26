/*
 CSC 134
 M4LAB1 - Nested Loops: Autumn Mushroom Patch
 Ruslana Rodriguez
 October 26, 2026
*/

#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;

    cout << "Welcome to Ruslana's Red and Orange Fall Forest!" << endl;
    cout << "Let's draw a mushroom patch using asterisks." << endl;
    cout << "Each * represents a mushroom in the forest." << endl;

    cout << "Enter the height (number of rows): ";
    cin >> height;
    cout << "Enter the width (mushrooms per row): ";
    cin >> width;

    if (!cin || height <= 0 || width <= 0)
    {
        cout << "Please enter positive whole numbers for both dimensions." << endl;
        return 1;
    }

    cout << endl << "Your autumn mushroom patch:" << endl;

    // Outer loop controls how many rows appear.
    for (int i = 0; i < height; i++)
    {
        // Inner loop prints the asterisks across one row.
        for (int j = 0; j < width; j++)
        {
            cout << "* ";
        }

        // Start a new row after printing its mushrooms.
        cout << endl;
    }

    return 0;
}
