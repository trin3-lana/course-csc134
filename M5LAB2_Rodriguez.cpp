// M5LAB2 - Complete a Program
// Calculate and display the area of a rectangle using functions.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    cout << "==================================" << endl;
    cout << "      RECTANGLE AREA CALCULATOR   " << endl;
    cout << "==================================" << endl;

    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);

    displayData(length, width, area);

    return 0;
}

// Ask for and return the rectangle's length.
double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// Ask for and return the rectangle's width.
double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// Calculate and return the area.
double getArea(double length, double width)
{
    return length * width;
}

// Display the length, width, and area with clear labels.
void displayData(double length, double width, double area)
{
    cout << fixed << setprecision(2);
    cout << "\n--------- RESULTS ---------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
    cout << "---------------------------" << endl;
}
