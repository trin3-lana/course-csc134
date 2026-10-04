/*
CSC 134
M2HW - Gold (with Bonus Improvements)
Ruslana Rodriguez
October 4, 2026
Description: A unified program completing all four Module 2 homework 
             questions, incorporating iomanip currency formatting, 
             getline, integer arithmetic, and string concatenation.
*/

#include <iostream>
#include <string>
#include <iomanip> // Needed for fixed and setprecision formatting

using namespace std;

int main() {
    // Set up global formatting rules for dollar amounts (2 decimal places)
    cout << fixed << setprecision(2);

    // =========================================================================
    // QUESTION 1: Banking Transaction Simulator
    // =========================================================================
    cout << "----------------------------------------\n";
    cout << "Question 1: Banking Transaction Simulator\n";
    cout << "----------------------------------------\n";

    string customerName;
    double startingBalance = 0.0;
    double depositAmount = 0.0;
    double withdrawalAmount = 0.0;
    string accountNumber = "FTCC-98421-X"; // Generated account number template

    cout << "Enter account holder name: ";
    // Use getline to allow spaces in the user's name (Bonus Requirement)
    getline(cin, customerName);

    cout << "Enter starting account balance ($): ";
    cin >> startingBalance;

    cout << "Enter amount of deposit ($): ";
    cin >> depositAmount;

    cout << "Enter amount of withdrawal ($): ";
    cin >> withdrawalAmount;

    // Calculate final balance
    double finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // Display Account Summary
    cout << "\n--- OFFICIAL FINANCIAL SUMMARY ---\n";
    cout << "Account Holder: " << customerName << "\n";
    cout << "Account Number: " << accountNumber << "\n";
    cout << "Final Balance:  $" << finalBalance << "\n\n";


    // =========================================================================
    // QUESTION 2: General Crates Inc. (M2LAB1 Refactor)
    // =========================================================================
    cout << "----------------------------------------\n";
    cout << "Question 2: General Crates Inc. Refactor\n";
    cout << "----------------------------------------\n";

    // Updated economic parameters as named constants
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Local dimensions variables for crate modeling
    double length = 0.0, width = 0.0, height = 0.0;

    cout << "Enter crate length (in feet): ";
    cin >> length;
    cout << "Enter crate width (in feet): ";
    cin >> width;
    cout << "Enter crate height (in feet): ";
    cin >> height;

    // Calculations
    double volume = length * width * height;
    double costToBuild = volume * COST_PER_CUBIC_FOOT;
    double customerCharge = volume * CHARGE_PER_CUBIC_FOOT;
    double totalProfit = customerCharge - costToBuild;

    // Display Crate Analysis with formatting (Bonus Requirement)
    cout << "\n--- CRATE INVENTORY ANALYSIS ---\n";
    cout << "Total Volume:   " << volume << " cubic feet\n";
    cout << "Cost to Build:  $" << costToBuild << "\n";
    cout << "Charge to Client: $" << customerCharge << "\n";
    cout << "Net Profit:     $" << totalProfit << "\n\n";


    // =========================================================================
    // QUESTION 3: Pizza Party Slice Calculator
    // =========================================================================
    cout << "----------------------------------------\n";
    cout << "Question 3: Pizza Party Slice Calculator\n";
    cout << "----------------------------------------\n";

    int pizzasOrdered = 0;
    int slicesPerPizza = 0;
    int visitorsComing = 0;
    const int SLICES_PER_PERSON = 3;

    cout << "Enter the number of pizzas ordered: ";
    cin >> pizzasOrdered;
    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;
    cout << "Enter the number of visitors attending: ";
    cin >> visitorsComing;

    // Mathematical processing
    int totalSlices = pizzasOrdered * slicesPerPizza;
    int slicesEaten = visitorsComing * SLICES_PER_PERSON;
    int leftoverSlices = totalSlices - slicesEaten;

    cout << "\n--- PARTY LOGISTICS SUMMARY ---\n";
    cout << "Total Pizza Pieces Left Over: " << leftoverSlices << " slices\n\n";


    // =========================================================================
    // QUESTION 4: FTCC Trojans Cheering Program
    // =========================================================================
    cout << "----------------------------------------\n";
    cout << "Question 4: FTCC Trojans Cheering Program\n";
    cout << "----------------------------------------\n";

    // Strict Variable Whitelist (Bonus Rules A, B, and C applied)
    string letsGo, school, team, cheerOne, cheerTwo;

    // Assigning fragments to variables to bypass raw literal streams completely
    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    // String Concatenation using the '+' operator to construct the final output strings
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // Display Output using ONLY the permitted variables (No raw strings allowed)
    cout << cheerOne << "\n";
    cout << cheerOne << "\n";
    cout << cheerOne << "\n";
    cout << cheerTwo << "\n";
    cout << "----------------------------------------\n";

    return 0;
}
