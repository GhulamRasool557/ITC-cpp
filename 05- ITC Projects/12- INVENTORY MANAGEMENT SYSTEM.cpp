/*
=========================================================
        INVENTORY MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program manages a simple inventory system.
It allows adding products, updating stock, and viewing inventory.

FEATURES:
- Add product stock
- Update product quantity
- View inventory status
- Track product availability

CONCEPTS USED:
- Loops (for, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Boolean logic
- Basic arithmetic

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
    int productID[100];
    int quantity[100];
    int price[100];

    bool active[100];

    int totalProducts = 0;

    int choice;
    int id;
    int qty;
    int pr;

    bool found;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        active[i] = false;
        quantity[i] = 0;
        price[i] = 0;
    }

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "     INVENTORY MANAGEMENT SYSTEM   " << endl;
    cout << "===================================" << endl;

    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Update Stock" << endl;
        cout << "3. View Inventory" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            if (totalProducts < 100)
            {
                cout << "Enter Product ID: ";
                cin >> id;

                cout << "Enter Quantity: ";
                cin >> qty;

                cout << "Enter Price: ";
                cin >> pr;

                if (qty >= 0 && pr > 0)
                {
                    productID[totalProducts] = id;
                    quantity[totalProducts] = qty;
                    price[totalProducts] = pr;

                    active[totalProducts] = true;

                    totalProducts++;

                    cout << "Product added successfully!" << endl;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                }
            }
            else
            {
                cout << "Inventory full!" << endl;
            }

            break;

        case 2:

            cout << "Enter Product ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalProducts; i++)
            {
                if (productID[i] == id && active[i] == true)
                {
                    cout << "Enter New Quantity: ";
                    cin >> qty;

                    if (qty >= 0)
                    {
                        quantity[i] = qty;
                        cout << "Stock updated successfully!" << endl;
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
                cout << "Product not found!" << endl;
            }

            break;

        case 3:

            cout << endl;
            cout << "======== INVENTORY LIST ========" << endl;

            found = false;

            for (int i = 0; i < totalProducts; i++)
            {
                if (active[i] == true)
                {
                    cout << "ID: " << productID[i]
                         << " | Qty: " << quantity[i]
                         << " | Unit Price: " << price[i]
                         << " | Total Price: " << quantity[i] * price[i] << endl;

                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No products available!" << endl;
            }

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