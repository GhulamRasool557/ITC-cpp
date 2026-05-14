/*
=========================================================
            BILLING SYSTEM (SHOP/STORE) (C++)
=========================================================

PROJECT DESCRIPTION:
This program simulates a simple shop billing system.
It calculates total bill with quantity and tax.

FEATURES:
- Add items to bill
- Calculate total price
- Apply tax
- Generate final invoice

CONCEPTS USED:
- Loops (for, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Basic arithmetic operations
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
    int itemCode[100];
    int itemQty[100];
    int itemPrice[100];

    int totalItems = 0;

    int choice;
    int code;
    int qty;
    int price;

    float taxRate = 0.05; // 5% tax
    float totalBill;
    float tax;
    float finalBill;

    bool found;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "        BILLING SYSTEM             " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Generate Bill" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            if (totalItems < 100)
            {
                cout << "Enter Item Code: ";
                cin >> code;

                cout << "Enter Quantity: ";
                cin >> qty;

                cout << "Enter Price per item: ";
                cin >> price;

                if (qty > 0 && price > 0)
                {
                    itemCode[totalItems] = code;
                    itemQty[totalItems] = qty;
                    itemPrice[totalItems] = price;

                    totalItems++;

                    cout << "Item added successfully!" << endl;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                }
            }
            else
            {
                cout << "Item limit reached!" << endl;
            }

            break;

        case 2:

            if (totalItems == 0)
            {
                cout << "No items to bill!" << endl;
                break;
            }

            totalBill = 0;

            cout << endl;
            cout << "========== INVOICE ==========" << endl;

            for (int i = 0; i < totalItems; i++)
            {
                cout << "Code: " << itemCode[i]
                     << " Qty: " << itemQty[i]
                     << " Price: " << itemPrice[i]
                     << " Subtotal: "
                     << (itemQty[i] * itemPrice[i]) << endl;

                totalBill = totalBill +
                            (itemQty[i] * itemPrice[i]);
            }

            tax = totalBill * taxRate;
            finalBill = totalBill + tax;

            cout << "----------------------------" << endl;
            cout << "Total Bill: " << totalBill << endl;
            cout << "Tax (5%): " << tax << endl;
            cout << "Final Bill: " << finalBill << endl;

            cout << "Thank you for shopping!" << endl;

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