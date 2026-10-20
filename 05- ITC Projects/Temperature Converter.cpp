/*
=========================================================
               TEMPERATURE CONVERTER (C++)
=========================================================

PROJECT DESCRIPTION:
This program converts temperature between
Celsius, Fahrenheit and Kelvin.

FEATURES:
- Celsius to Fahrenheit and back
- Celsius to Kelvin and back
- Below absolute zero check
- Menu-driven system

CONCEPTS USED:
- Loops (do-while)
- Conditional statements (if-else, switch)
- Formulas with float values
- Menu-driven program design

AUTHOR:
Ghulam Rasool

FOR QUERIES:
Gmail: epiccoding557@gmail.com

=========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    // ----------- SYSTEM DATA -----------
    int choice;
    float temp;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "      TEMPERATURE CONVERTER        " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;
            break;

        case 3:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;

            if (temp < -273.15)
                cout << "Below absolute zero is not possible!" << endl;
            else
                cout << "Kelvin: " << temp + 273.15 << endl;
            break;

        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;

            if (temp < 0)
                cout << "Kelvin cannot be negative!" << endl;
            else
                cout << "Celsius: " << temp - 273.15 << endl;
            break;

        case 5:
            cout << "Exiting converter..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
