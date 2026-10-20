/*
=========================================================
               SHOPPING CART SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program shows a product list. The user adds
and removes products in a cart and checks out.

FEATURES:
- Fixed product catalog with prices
- Add product to cart with quantity
- Remove product from cart
- Discount on big bills and checkout

CONCEPTS USED:
- Arrays (1D only)
- Loops (for, do-while)
- Conditional statements (if-else, switch)
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
    int price[5] = {250, 120, 80, 600, 1500};
    int cartQty[5] = {0, 0, 0, 0, 0};

    int choice;
    int product;
    int qty;
    int total;
    float discount;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "       SHOPPING CART SYSTEM        " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Show Products" << endl;
        cout << "2. Add to Cart" << endl;
        cout << "3. Remove from Cart" << endl;
        cout << "4. View Cart" << endl;
        cout << "5. Checkout" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "1. Notebook  - Rs. " << price[0] << endl;
            cout << "2. Pen Pack  - Rs. " << price[1] << endl;
            cout << "3. Eraser    - Rs. " << price[2] << endl;
            cout << "4. Calculator- Rs. " << price[3] << endl;
            cout << "5. Bag       - Rs. " << price[4] << endl;
            break;

        case 2:
            cout << "Enter product number (1 to 5): ";
            cin >> product;

            cout << "Enter quantity: ";
            cin >> qty;

            if (product >= 1 && product <= 5 && qty > 0)
            {
                cartQty[product - 1] += qty;
                cout << "Added to cart!" << endl;
            }
            else
            {
                cout << "Invalid input!" << endl;
            }
            break;

        case 3:
            cout << "Enter product number to remove: ";
            cin >> product;

            if (product >= 1 && product <= 5 && cartQty[product - 1] > 0)
            {
                cartQty[product - 1] = 0;
                cout << "Removed from cart!" << endl;
            }
            else
            {
                cout << "Product not in cart!" << endl;
            }
            break;

        case 4:
        case 5:
            total = 0;

            cout << endl << "========== CART ==========" << endl;
            for (int i = 0; i < 5; i++)
            {
                if (cartQty[i] > 0)
                {
                    cout << "Product " << i + 1
                         << "  Qty: " << cartQty[i]
                         << "  Subtotal: " << cartQty[i] * price[i] << endl;

                    total += cartQty[i] * price[i];
                }
            }

            if (total == 0)
            {
                cout << "Cart is empty!" << endl;
                break;
            }

            cout << "Total: Rs. " << total << endl;

            if (choice == 5)
            {
                // 10% discount on bills of 3000 or more
                if (total >= 3000)
                    discount = total * 0.10;
                else
                    discount = 0;

                cout << "Discount: Rs. " << discount << endl;
                cout << "Amount to Pay: Rs. " << total - discount << endl;
                cout << "Thank you for shopping!" << endl;

                for (int i = 0; i < 5; i++)
                    cartQty[i] = 0;
            }
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
