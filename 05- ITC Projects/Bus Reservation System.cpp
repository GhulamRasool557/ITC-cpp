/*
=========================================================
              BUS RESERVATION SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program manages seat reservations for
3 buses with 20 seats each.

FEATURES:
- Choose bus by route
- Reserve a seat with passenger ID
- Cancel a reservation
- Show seat status of a bus

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
    int seat[3][20];     // 0 = free, otherwise passenger ID
    int fare[3] = {1500, 2200, 3000};

    int choice;
    int bus;
    int seatNo;
    int passengerId;
    int freeSeats;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
            seat[i][j] = 0;
    }

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "      BUS RESERVATION SYSTEM       " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Show Buses" << endl;
        cout << "2. Reserve Seat" << endl;
        cout << "3. Cancel Reservation" << endl;
        cout << "4. Show Seat Status" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 2 && choice <= 4)
        {
            cout << "Enter bus number (1 to 3): ";
            cin >> bus;

            if (bus < 1 || bus > 3)
            {
                cout << "Invalid bus!" << endl;
                continue;
            }
        }

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                freeSeats = 0;
                for (int j = 0; j < 20; j++)
                {
                    if (seat[i][j] == 0)
                        freeSeats++;
                }

                cout << "Bus " << i + 1;
                if (i == 0)
                    cout << " (Lahore - Faisalabad)";
                else if (i == 1)
                    cout << " (Lahore - Islamabad)";
                else
                    cout << " (Lahore - Multan)";

                cout << "  Fare: Rs. " << fare[i]
                     << "  Free seats: " << freeSeats << endl;
            }
            break;

        case 2:
            cout << "Enter seat number (1 to 20): ";
            cin >> seatNo;

            if (seatNo < 1 || seatNo > 20)
            {
                cout << "Invalid seat!" << endl;
            }
            else if (seat[bus - 1][seatNo - 1] != 0)
            {
                cout << "Seat already reserved!" << endl;
            }
            else
            {
                cout << "Enter passenger ID: ";
                cin >> passengerId;

                if (passengerId <= 0)
                {
                    cout << "Invalid passenger ID!" << endl;
                }
                else
                {
                    seat[bus - 1][seatNo - 1] = passengerId;
                    cout << "Seat reserved! Fare: Rs. " << fare[bus - 1] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter seat number (1 to 20): ";
            cin >> seatNo;

            if (seatNo < 1 || seatNo > 20 || seat[bus - 1][seatNo - 1] == 0)
            {
                cout << "No reservation on this seat!" << endl;
            }
            else
            {
                seat[bus - 1][seatNo - 1] = 0;
                cout << "Reservation cancelled!" << endl;
            }
            break;

        case 4:
            for (int j = 0; j < 20; j++)
            {
                cout << "Seat " << j + 1 << ": ";

                if (seat[bus - 1][j] == 0)
                    cout << "Free" << endl;
                else
                    cout << "Passenger " << seat[bus - 1][j] << endl;
            }
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
