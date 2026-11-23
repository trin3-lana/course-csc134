// CSC 134
// M6T1 - Basic Arrays
// Part 1: Count cars without an array
// Part 2: Count cars using an array

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void method1();
void method2();

int main()
{
    cout << "M6T1 - Basic Arrays" << endl;

    method1();
    method2();

    return 0;
}

// Part 1 - Count cars without arrays
void method1()
{
    cout << "\nPart 1 - No Arrays" << endl;

    const int DAYS = 5;
    int carsToday;
    int total = 0;

    for (int day = 1; day <= DAYS; day++)
    {
        cout << "Enter cars for day " << day << ": ";
        cin >> carsToday;
        total += carsToday;
    }

    double average = static_cast<double>(total) / DAYS;
    cout << "Total cars: " << total << endl;
    cout << "Average per day: " << average << endl;
}

// Part 2 - Count cars using an array
void method2()
{
    cout << "\nPart 2 - Using Arrays" << endl;

    const int DAYS = 5;
    const string weekdays[DAYS] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
    };
    int cars[DAYS] = {0};
    int total = 0;

    for (int i = 0; i < DAYS; i++)
    {
        cout << "Enter cars for " << weekdays[i] << ": ";
        cin >> cars[i];
        total += cars[i];
    }

    double average = static_cast<double>(total) / DAYS;
    cout << "\nWeekly Car Counts" << endl;
    for (int i = 0; i < DAYS; i++)
    {
        cout << weekdays[i] << ": " << cars[i] << endl;
    }

    cout << "\nTotal cars: " << total << endl;
    cout << "Average per day: " << average << endl;

    cout << "\nWeekly Traffic Chart" << endl;
    cout << "Each * represents 10 cars.\n";
    for (int i = 0; i < DAYS; i++)
    {
        cout << weekdays[i] << ": ";
        for (int j = 0; j < cars[i] / 10; j++)
        {
            cout << '*';
        }
        cout << " (" << cars[i] << ")" << endl;
    }
}
