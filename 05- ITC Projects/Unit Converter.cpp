/*
=========================================================
                  UNIT CONVERTER (C++)
=========================================================

PROJECT DESCRIPTION:
This program converts common units of length
and weight.

FEATURES:
- Kilometers to meters and miles
- Meters to centimeters and feet
- Kilograms to grams and pounds
- Negative value check

CONCEPTS USED:
- Loops (do-while)
- Conditional statements (if-else, switch)
- Multiplication with float values
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
    float value;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "          UNIT CONVERTER           " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Kilometers" << endl;
        cout << "2. Meters" << endl;
        cout << "3. Kilograms" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            cout << "Enter value: ";
            cin >> value;

            if (value < 0)
            {
                cout << "Value cannot be negative!" << endl;
                continue;
            }
        }

        switch (choice)
        {
        case 1:
            cout << value << " km = " << value * 1000 << " meters" << endl;
            cout << value << " km = " << value * 0.621371 << " miles" << endl;
            break;

        case 2:
            cout << value << " m = " << value * 100 << " centimeters" << endl;
            cout << value << " m = " << value * 3.28084 << " feet" << endl;
            break;

        case 3:
            cout << value << " kg = " << value * 1000 << " grams" << endl;
            cout << value << " kg = " << value * 2.20462 << " pounds" << endl;
            break;

        case 4:
            cout << "Exiting converter..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
