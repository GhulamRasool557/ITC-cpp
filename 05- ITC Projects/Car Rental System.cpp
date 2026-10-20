/*
=========================================================
                 CAR RENTAL SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program rents out cars for a number of days
and calculates the rent, with a late return fine.

FEATURES:
- Show available cars with daily rent
- Rent a car for given days
- Return a car with late fine
- Total income

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
    int dailyRent[5] = {3000, 4000, 5500, 8000, 12000};
    bool rented[5] = {false, false, false, false, false};
    int bookedDays[5] = {0, 0, 0, 0, 0};
    int income = 0;

    int choice;
    int car;
    int days;
    int actualDays;
    int rent;
    int fine;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "         CAR RENTAL SYSTEM         " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Show Cars" << endl;
        cout << "2. Rent a Car" << endl;
        cout << "3. Return a Car" << endl;
        cout << "4. Total Income" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                cout << "Car " << i + 1 << "  Rent per day: Rs. " << dailyRent[i];

                if (rented[i])
                    cout << "  (Rented)" << endl;
                else
                    cout << "  (Available)" << endl;
            }
            break;

        case 2:
            cout << "Enter car number (1 to 5): ";
            cin >> car;

            if (car < 1 || car > 5)
            {
                cout << "Invalid car!" << endl;
            }
            else if (rented[car - 1])
            {
                cout << "Car is already rented!" << endl;
            }
            else
            {
                cout << "Enter number of days: ";
                cin >> days;

                if (days <= 0)
                {
                    cout << "Invalid days!" << endl;
                }
                else
                {
                    rented[car - 1] = true;
                    bookedDays[car - 1] = days;
                    rent = days * dailyRent[car - 1];

                    // 10% off for a week or more
                    if (days >= 7)
                        rent = rent - rent / 10;

                    income += rent;
                    cout << "Car rented! Rent to pay: Rs. " << rent << endl;
                }
            }
            break;

        case 3:
            cout << "Enter car number (1 to 5): ";
            cin >> car;

            if (car < 1 || car > 5 || !rented[car - 1])
            {
                cout << "This car is not rented!" << endl;
                break;
            }

            cout << "Days the car was kept: ";
            cin >> actualDays;

            fine = 0;
            if (actualDays > bookedDays[car - 1])
            {
                // Fine is 1.5 times daily rent for each extra day
                fine = (actualDays - bookedDays[car - 1]) * dailyRent[car - 1] * 3 / 2;
                income += fine;
            }

            rented[car - 1] = false;
            bookedDays[car - 1] = 0;

            cout << "Car returned!" << endl;
            cout << "Late fine: Rs. " << fine << endl;
            break;

        case 4:
            cout << "Total income: Rs. " << income << endl;
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
