/*
=========================================================
            MOVIE TICKET BOOKING SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program books seats in a cinema hall with
5 rows and 8 seats in each row.

FEATURES:
- Seat map display
- Book a seat by row and seat number
- Cancel a booking
- Ticket price by row and total sales

CONCEPTS USED:
- Arrays (2D)
- Nested loops
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
    int seats[5][8];   // 0 = free, 1 = booked
    int sales = 0;

    int choice;
    int row;
    int seat;
    int price;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
            seats[i][j] = 0;
    }

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "    MOVIE TICKET BOOKING SYSTEM    " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Show Seats" << endl;
        cout << "2. Book Seat" << endl;
        cout << "3. Cancel Booking" << endl;
        cout << "4. Total Sales" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "        SCREEN" << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "Row " << i + 1 << ": ";
                for (int j = 0; j < 8; j++)
                {
                    if (seats[i][j] == 0)
                        cout << "O ";
                    else
                        cout << "X ";
                }
                cout << endl;
            }
            cout << "O = Free, X = Booked" << endl;
            cout << "Rows 1-2: Rs. 500, Rows 3-5: Rs. 800" << endl;
            break;

        case 2:
        case 3:
            cout << "Enter row (1 to 5): ";
            cin >> row;

            cout << "Enter seat (1 to 8): ";
            cin >> seat;

            if (row < 1 || row > 5 || seat < 1 || seat > 8)
            {
                cout << "Invalid seat!" << endl;
                break;
            }

            // Back rows cost more
            if (row <= 2)
                price = 500;
            else
                price = 800;

            if (choice == 2)
            {
                if (seats[row - 1][seat - 1] == 1)
                {
                    cout << "Seat already booked!" << endl;
                }
                else
                {
                    seats[row - 1][seat - 1] = 1;
                    sales += price;
                    cout << "Seat booked! Price: Rs. " << price << endl;
                }
            }
            else
            {
                if (seats[row - 1][seat - 1] == 0)
                {
                    cout << "Seat is not booked!" << endl;
                }
                else
                {
                    seats[row - 1][seat - 1] = 0;
                    sales -= price;
                    cout << "Booking cancelled! Refund: Rs. " << price << endl;
                }
            }
            break;

        case 4:
            cout << "Total sales: Rs. " << sales << endl;
            break;

        case 5:
            cout << "Exiting system..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
