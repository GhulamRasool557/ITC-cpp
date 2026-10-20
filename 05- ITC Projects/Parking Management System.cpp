/*
=========================================================
             PARKING MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program manages a parking area with 10 slots.
It parks vehicles, removes them and charges fees.

FEATURES:
- Park car or bike in a free slot
- Remove vehicle and calculate fee
- Show all slots
- Total earnings

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
    int slotType[10];      // 0 = empty, 1 = car, 2 = bike
    int slotNumber[10];    // Vehicle number
    int earnings = 0;

    int choice;
    int type;
    int number;
    int hours;
    int fee;
    bool found;

    for (int i = 0; i < 10; i++)
        slotType[i] = 0;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "     PARKING MANAGEMENT SYSTEM     " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Park Vehicle" << endl;
        cout << "2. Remove Vehicle" << endl;
        cout << "3. Show Slots" << endl;
        cout << "4. Total Earnings" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Vehicle type (1 = Car, 2 = Bike): ";
            cin >> type;

            if (type != 1 && type != 2)
            {
                cout << "Invalid type!" << endl;
                break;
            }

            cout << "Enter vehicle number: ";
            cin >> number;

            found = false;
            for (int i = 0; i < 10; i++)
            {
                if (slotType[i] == 0)
                {
                    slotType[i] = type;
                    slotNumber[i] = number;
                    cout << "Parked at slot " << i + 1 << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Parking is full!" << endl;
            break;

        case 2:
            cout << "Enter vehicle number: ";
            cin >> number;

            found = false;
            for (int i = 0; i < 10; i++)
            {
                if (slotType[i] != 0 && slotNumber[i] == number)
                {
                    cout << "Enter hours parked: ";
                    cin >> hours;

                    if (hours < 1)
                        hours = 1;

                    // Car Rs. 50 per hour, Bike Rs. 20 per hour
                    if (slotType[i] == 1)
                        fee = hours * 50;
                    else
                        fee = hours * 20;

                    earnings += fee;
                    slotType[i] = 0;

                    cout << "Fee: Rs. " << fee << endl;
                    cout << "Slot " << i + 1 << " is now free." << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Vehicle not found!" << endl;
            break;

        case 3:
            for (int i = 0; i < 10; i++)
            {
                cout << "Slot " << i + 1 << ": ";

                if (slotType[i] == 0)
                    cout << "Empty" << endl;
                else if (slotType[i] == 1)
                    cout << "Car " << slotNumber[i] << endl;
                else
                    cout << "Bike " << slotNumber[i] << endl;
            }
            break;

        case 4:
            cout << "Total earnings: Rs. " << earnings << endl;
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
