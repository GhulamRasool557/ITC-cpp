/*
=========================================================
            ELECTRICITY BILL CALCULATOR (C++)
=========================================================

PROJECT DESCRIPTION:
This program calculates an electricity bill
using slab rates on units consumed.

FEATURES:
- Slab-based unit rates
- Fixed meter charges
- Late payment surcharge
- Bill for many customers

CONCEPTS USED:
- Loops (do-while)
- Conditional statements (if-else ladder)
- Basic arithmetic operations
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
    int customerId;
    int units;
    float bill;
    float meterCharges = 100; // Fixed charges
    char late;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "    ELECTRICITY BILL CALCULATOR    " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Calculate Bill" << endl;
        cout << "2. Show Rates" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Customer ID: ";
            cin >> customerId;

            cout << "Enter units consumed: ";
            cin >> units;

            if (units < 0)
            {
                cout << "Invalid units!" << endl;
                break;
            }

            // Slab rates
            if (units <= 100)
                bill = units * 10;
            else if (units <= 200)
                bill = 100 * 10 + (units - 100) * 15;
            else if (units <= 300)
                bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
            else
                bill = 100 * 10 + 100 * 15 + 100 * 20 + (units - 300) * 25;

            bill = bill + meterCharges;

            cout << "Paid after due date? (y/n): ";
            cin >> late;

            cout << endl;
            cout << "========== BILL ==========" << endl;
            cout << "Customer ID: " << customerId << endl;
            cout << "Units: " << units << endl;
            cout << "Meter Charges: " << meterCharges << endl;

            if (late == 'y' || late == 'Y')
            {
                cout << "Late Surcharge (10%): " << bill * 0.10 << endl;
                bill = bill + bill * 0.10;
            }

            cout << "Total Bill: Rs. " << bill << endl;
            break;

        case 2:
            cout << "1 - 100 units   : Rs. 10 per unit" << endl;
            cout << "101 - 200 units : Rs. 15 per unit" << endl;
            cout << "201 - 300 units : Rs. 20 per unit" << endl;
            cout << "Above 300 units : Rs. 25 per unit" << endl;
            cout << "Meter charges   : Rs. 100" << endl;
            break;

        case 3:
            cout << "Exiting system..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}
