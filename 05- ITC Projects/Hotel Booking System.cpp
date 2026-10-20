/*
=========================================================
         HOTEL BOOKING SYSTEM (C++) - BASIC
=========================================================

PROJECT DESCRIPTION:
This program simulates a simple hotel booking system.
Users can book rooms, check availability, and checkout.

FEATURES:
- Room booking
- Room availability check
- Checkout system
- Simple billing based on days

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
    int roomNo[10];
    bool booked[10];
    int days[10];

    int totalRooms = 10;

    int choice;
    int room;
    int stayDays;

    int feePerDay = 2000;
    int bill;

    bool found;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < totalRooms; i++)
    {
        booked[i] = false;
        days[i] = 0;
        roomNo[i] = i + 1;
    }

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "       HOTEL BOOKING SYSTEM        " << endl;
    cout << "===================================" << endl;

    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Check Available Rooms" << endl;
        cout << "2. Book Room" << endl;
        cout << "3. Checkout" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << endl;
            cout << "---- AVAILABLE ROOMS ----" << endl;

            found = false;

            for (int i = 0; i < totalRooms; i++)
            {
                if (booked[i] == false)
                {
                    cout << "Room " << roomNo[i] << " is AVAILABLE" << endl;
                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No rooms available!" << endl;
            }

            break;

        case 2:

            cout << "\nEach room cost 2000 per Day." << endl;

            cout << "Enter Room Number (1-10): ";
            cin >> room;

            found = false;

            for (int i = 0; i < totalRooms; i++)
            {
                if (roomNo[i] == room)
                {
                    if (booked[i] == false)
                    {
                        cout << "Enter number of days: ";
                        cin >> stayDays;

                        if (stayDays > 0)
                        {
                            booked[i] = true;
                            days[i] = stayDays;

                            cout << "Room booked successfully!" << endl;
                        }
                        else
                        {
                            cout << "Invalid days!" << endl;
                        }
                    }
                    else
                    {
                        cout << "Room already booked!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Invalid room number!" << endl;
            }

            break;

        case 3:

            cout << "Enter Room Number: ";
            cin >> room;

            found = false;

            for (int i = 0; i < totalRooms; i++)
            {
                if (roomNo[i] == room)
                {
                    if (booked[i] == true)
                    {
                        bill = days[i] * feePerDay;

                        cout << "Room Number: " << roomNo[i] << endl;
                        cout << "Days Stayed: " << days[i] << endl;
                        cout << "Total Bill: " << bill << endl;

                        booked[i] = false;
                        days[i] = 0;
                    }
                    else
                    {
                        cout << "Room is not booked!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Invalid room number!" << endl;
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