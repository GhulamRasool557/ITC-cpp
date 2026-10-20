/*
=========================================================
                 SIMPLE CALCULATOR (C++)
=========================================================

PROJECT DESCRIPTION:
This program works like a basic calculator.
The user picks an operation from a menu and
enters two numbers to get the answer.

FEATURES:
- Addition, subtraction, multiplication, division
- Remainder (modulus) of two integers
- Division by zero check
- Repeat until the user exits

CONCEPTS USED:
- Loops (do-while)
- Conditional statements (if-else, switch)
- Arithmetic operators
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
    double a, b;
    int x, y;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "        SIMPLE CALCULATOR          " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Remainder" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a + b << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a - b << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a * b << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b == 0)
                cout << "Cannot divide by zero!" << endl;
            else
                cout << "Result: " << a / b << endl;
            break;

        case 5:
            cout << "Enter two integers: ";
            cin >> x >> y;

            if (y == 0)
                cout << "Cannot divide by zero!" << endl;
            else
                cout << "Result: " << x % y << endl;
            break;

        case 6:
            cout << "Exiting calculator..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}
