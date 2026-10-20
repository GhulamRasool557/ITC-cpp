/*
=========================================================
        RESTAURANT ORDERING SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program simulates a simple restaurant ordering system.
Users can view menu, place orders, and generate bill.

FEATURES:
- Display menu items
- Place multiple orders
- Calculate total bill
- Simple invoice generation

CONCEPTS USED:
- Loops (for, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Basic arithmetic
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
    int itemCode[5] = {1, 2, 3, 4, 5};
    int itemPrice[5] = {200, 150, 300, 250, 100};

    int orderCode[100];
    int orderQty[100];

    int orderCount = 0;

    int choice;
    int code;
    int qty;

    int totalBill;

    bool found;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "     RESTAURANT ORDER SYSTEM      " << endl;
    cout << "===================================" << endl;

    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. View Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3. Generate Bill" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << endl;
            cout << "--------- MENU LIST ---------" << endl;
            cout << "1. Burger  - 200" << endl;
            cout << "2. Pizza   - 150" << endl;
            cout << "3. Pasta   - 300" << endl;
            cout << "4. Fries   - 250" << endl;
            cout << "5. Drink   - 100" << endl;

            break;

        case 2:

            cout << endl;
            cout << "--------- MENU LIST ---------" << endl;
            cout << "1. Burger  - 200" << endl;
            cout << "2. Pizza   - 150" << endl;
            cout << "3. Pasta   - 300" << endl;
            cout << "4. Fries   - 250" << endl;
            cout << "5. Drink   - 100" << endl;

            cout << "Enter Item Code (1-5): ";
            cin >> code;

            found = false;

            for (int i = 0; i < 5; i++)
            {
                if (itemCode[i] == code)
                {
                    cout << "Enter Quantity: ";
                    cin >> qty;

                    if (qty > 0)
                    {
                        orderCode[orderCount] = code;
                        orderQty[orderCount] = qty;

                        orderCount++;

                        cout << "Order added successfully!" << endl;
                    }
                    else
                    {
                        cout << "Invalid quantity!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Invalid item code!" << endl;
            }

            break;

        case 3:

            if (orderCount == 0)
            {
                cout << "No orders placed!" << endl;
                break;
            }

            totalBill = 0;

            cout << endl;
            cout << "=========== BILL ===========" << endl;

            for (int i = 0; i < orderCount; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (orderCode[i] == itemCode[j])
                    {
                        cout << "Item Code: " << orderCode[i]
                             << " Qty: " << orderQty[i]
                             << " Price: " << itemPrice[j] << endl;

                        totalBill = totalBill + (orderQty[i] * itemPrice[j]);
                    }
                }
            }

            cout << "---------------------------" << endl;
            cout << "Total Bill: " << totalBill << endl;

            cout << "Thank you for visiting!" << endl;

            break;

        case 4:

            cout << "Exiting system..." << endl;
            break;

        default:

            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}