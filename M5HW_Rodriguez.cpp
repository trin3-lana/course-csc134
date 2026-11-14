// CSC 134 - M5HW1 - Gold Level
// Questions 1-5 are separate functions; Question 6 is the main menu.
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

void averageRainfall();
void blockVolume();
void romanNumerals();
void geometryCalculator();
void distanceTraveled();

// Read a numeric value and reject nonnumeric input or out-of-range values.
double readDouble(const string& prompt, double minimum, bool minimumAllowed = true) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value && (value > minimum || (minimumAllowed && value == minimum))) {
            return value;
        }
        cout << "Invalid input. Please enter a number "
             << (minimumAllowed ? "greater than or equal to " : "greater than ")
             << minimum << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int readInt(const string& prompt, int minimum, int maximum) {
    int value;
    while (true) {
        cout << prompt;
        if (cin >> value && value >= minimum && value <= maximum) {
            return value;
        }
        cout << "Invalid choice. Enter a whole number from " << minimum
             << " to " << maximum << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    int choice;
    cout << "Welcome to CSC 134 - M5HW1!\n";
    do {
        cout << "\n========== MAIN MENU ==========\n"
             << "1. Average Rainfall Calculator\n"
             << "2. Block Volume Calculator\n"
             << "3. Roman Numeral Converter\n"
             << "4. Geometry Calculator\n"
             << "5. Distance Traveled Calculator\n"
             << "6. Exit\n";
        choice = readInt("Enter your choice (1-6): ", 1, 6);
        if (choice == 1) averageRainfall();
        else if (choice == 2) blockVolume();
        else if (choice == 3) romanNumerals();
        else if (choice == 4) geometryCalculator();
        else if (choice == 5) distanceTraveled();
        else cout << "Thanks for using the program. Goodbye!\n";
    } while (choice != 6);
    return 0;
}

// Question 1: three months of rainfall and their average.
void averageRainfall() {
    string month1, month2, month3;
    cout << "\n--- Average Rainfall Calculator ---\n";
    cout << "Enter month: ";
    cin >> month1;
    double rain1 = readDouble("Enter rainfall for " + month1 + ": ", 0);
    cout << "Enter month: ";
    cin >> month2;
    double rain2 = readDouble("Enter rainfall for " + month2 + ": ", 0);
    cout << "Enter month: ";
    cin >> month3;
    double rain3 = readDouble("Enter rainfall for " + month3 + ": ", 0);
    cout << fixed << setprecision(2)
         << "The average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << (rain1 + rain2 + rain3) / 3.0
         << " inches.\n";
}

// Question 2: volume = length * width * height.
void blockVolume() {
    cout << "\n--- Block Volume Calculator ---\n";
    double width = readDouble("Enter the block's width: ", 0, false);
    double length = readDouble("Enter the block's length: ", 0, false);
    double height = readDouble("Enter the block's height: ", 0, false);
    cout << fixed << setprecision(2)
         << "Width: " << width << "\nLength: " << length
         << "\nHeight: " << height
         << "\nVolume: " << width * length * height << " cubic units\n";
}

// Question 3: convert an integer from 1 to 10 to Roman numerals.
void romanNumerals() {
    cout << "\n--- Roman Numeral Converter ---\n";
    int number = readInt("Enter a number (1-10): ", 1, 10);
    const string numerals[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    cout << "The Roman numeral version of " << number
         << " is " << numerals[number - 1] << ".\n";
}

// Question 4: geometry menu. Option 4 returns to main menu.
void geometryCalculator() {
    int choice;
    const double PI = 3.14159;
    do {
        cout << "\nGeometry Calculator\n"
             << "1. Calculate the Area of a Circle\n"
             << "2. Calculate the Area of a Rectangle\n"
             << "3. Calculate the Area of a Triangle\n"
             << "4. Quit (Return to Main Menu)\n";
        choice = readInt("Enter your choice (1-4): ", 1, 4);
        if (choice == 1) {
            double radius = readDouble("Enter the circle's radius: ", 0);
            cout << "The area is " << fixed << setprecision(5)
                 << PI * radius * radius << "\n";
        } else if (choice == 2) {
            double length = readDouble("Enter the rectangle's length: ", 0);
            double width = readDouble("Enter the rectangle's width: ", 0);
            cout << "The area is " << fixed << setprecision(2)
                 << length * width << "\n";
        } else if (choice == 3) {
            double base = readDouble("Enter the triangle's base: ", 0);
            double height = readDouble("Enter the triangle's height: ", 0);
            cout << "The area is " << fixed << setprecision(2)
                 << base * height * 0.5 << "\n";
        }
    } while (choice != 4);
}

// Question 5: show distance at each whole hour.
void distanceTraveled() {
    cout << "\n--- Distance Traveled Calculator ---\n";
    double speed = readDouble("What is the speed of the vehicle in mph? ", 0);
    int hours = readInt("How many hours has it traveled? ", 1, 100000);
    cout << "\n" << left << setw(10) << "Hour" << "Distance Traveled (miles)\n"
         << "------------------------------------\n";
    for (int hour = 1; hour <= hours; ++hour) {
        cout << left << setw(10) << hour << fixed << setprecision(2)
             << speed * hour << "\n";
    }
}
