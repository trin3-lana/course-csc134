//CSC 134
// M2HW1 - General Crates Inc. Calculator
// Ruslana Rodriguez
// September 27, 2026

#include <iostream>
#include <iomanip> // Needed for setprecision and fixed

using namespace std;

int main() 
{
    // 1. Named Constants
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;

    // 2. Variable Declarations
    double length;  // Crate length in feet
    double width;   // Crate width in feet
    double height;  // Crate height in feet
    double volume;  // Total calculated volume
    double cost;    // Production cost to build
    double charge;  // Amount customer is charged
    double profit;  // Net profit earned  

    // 3. Set Decimal Output Formatting
    cout << setprecision(2) << fixed << showpoint;

    // 4. INPUT: Interactive Prompts
    cout << "Enter the dimensions of the crate (in feet):" << endl;
    cout << "Length: ";
    cin >> length;
    
    cout << "Width: ";
    cin >> width;
    
    cout << "Height: ";
    cin >> height;

    // 5. PROCESSING: Calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // 6. OUTPUT: Summary Display
    cout << "\n=========================================" << endl;
    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "Cost to build:       $" << cost << endl;
    cout << "Charge to customer:  $" << charge << endl;
    cout << "Profit:              $" << profit << endl;
    cout << "=========================================" << endl;

    return 0;
}
