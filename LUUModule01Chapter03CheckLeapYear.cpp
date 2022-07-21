// LUUModule01Chapter03CheckLeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    auto year{ 0 };
    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year." << endl;
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
}