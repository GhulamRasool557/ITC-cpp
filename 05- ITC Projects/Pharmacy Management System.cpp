/*
=========================================================
            PHARMACY MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program manages medicines in a pharmacy:
stock, prices and sales.

FEATURES:
- Add new medicine with code, price and stock
- Sell medicine and update stock
- Low stock warning
- Show all medicines and total sales

CONCEPTS USED:
- Arrays (1D only)
- Loops (for, do-while)
- Searching in an array
- Menu-driven system

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
    int medCode[50];
    int medPrice[50];
    int medStock[50];
    int totalMeds = 0;
    int totalSales = 0;

    int choice;
    int code;
    int qty;
    int index;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "    PHARMACY MANAGEMENT SYSTEM     " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Add Medicine" << endl;
        cout << "2. Sell Medicine" << endl;
        cout << "3. Show All Medicines" << endl;
        cout << "4. Low Stock Report" << endl;
        cout << "5. Total Sales" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (totalMeds == 50)
            {
                cout << "Medicine limit reached!" << endl;
                break;
            }

            cout << "Enter medicine code: ";
            cin >> code;

            // Code must be unique
            index = -1;
            for (int i = 0; i < totalMeds; i++)
            {
                if (medCode[i] == code)
                    index = i;
            }

            if (index != -1)
            {
                cout << "Medicine code already exists!" << endl;
                break;
            }

            medCode[totalMeds] = code;

            cout << "Enter price: ";
            cin >> medPrice[totalMeds];

            cout << "Enter stock: ";
            cin >> medStock[totalMeds];

            if (medPrice[totalMeds] <= 0 || medStock[totalMeds] < 0)
            {
                cout << "Invalid price or stock!" << endl;
                break;
            }

            totalMeds++;
            cout << "Medicine added!" << endl;
            break;

        case 2:
            cout << "Enter medicine code: ";
            cin >> code;

            index = -1;
            for (int i = 0; i < totalMeds; i++)
            {
                if (medCode[i] == code)
                {
                    index = i;
                    break;
                }
            }

            if (index == -1)
            {
                cout << "Medicine not found!" << endl;
                break;
            }

            cout << "Enter quantity: ";
            cin >> qty;

            if (qty <= 0)
            {
                cout << "Invalid quantity!" << endl;
            }
            else if (qty > medStock[index])
            {
                cout << "Only " << medStock[index] << " in stock!" << endl;
            }
            else
            {
                medStock[index] -= qty;
                totalSales += qty * medPrice[index];
                cout << "Bill: Rs. " << qty * medPrice[index] << endl;
            }
            break;

        case 3:
            if (totalMeds == 0)
            {
                cout << "No medicines added!" << endl;
                break;
            }

            for (int i = 0; i < totalMeds; i++)
            {
                cout << "Code: " << medCode[i]
                     << "  Price: " << medPrice[i]
                     << "  Stock: " << medStock[i] << endl;
            }
            break;

        case 4:
            cout << "Medicines with stock below 10:" << endl;
            index = 0;
            for (int i = 0; i < totalMeds; i++)
            {
                if (medStock[i] < 10)
                {
                    cout << "Code: " << medCode[i] << "  Stock: " << medStock[i] << endl;
                    index++;
                }
            }

            if (index == 0)
                cout << "None" << endl;
            break;

        case 5:
            cout << "Total sales: Rs. " << totalSales << endl;
            break;

        case 6:
            cout << "Exiting system..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}
