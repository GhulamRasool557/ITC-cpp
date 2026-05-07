/*
=========================================================
           BANKING MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program simulates a basic Banking Management System.
Users can create accounts, deposit/withdraw money,
search accounts, and delete accounts.

FEATURES:
- Create new account
- Deposit & withdraw money
- Search account by ID
- Delete account
- Simple data storage using arrays

CONCEPTS USED:
- Loops (for, while, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Boolean logic
- Menu-driven programming

AUTHOR:
Ghulam Rasool

FOR QUERIES:
Email: epiccoding557@gmail.com

=========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    // ----------- SYSTEM DATA -----------
    int accID[100];      // Account IDs
    double balance[100]; // Account balances
    bool active[100];    // Account status

    int totalAccounts = 0;

    int choice;
    int id;
    double amount;
    bool found;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        active[i] = false;
    }

    // ----------- WELCOME -----------
    cout << "==============================" << endl;
    cout << "   BANKING MANAGEMENT SYSTEM  " << endl;
    cout << "==============================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl << "========= MENU =========" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Search Account" << endl;
        cout << "5. Delete Account" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (totalAccounts < 100)
            {
                cout << "Enter Account ID: ";
                cin >> id;

                accID[totalAccounts] = id;
                balance[totalAccounts] = 0;
                active[totalAccounts] = true;

                totalAccounts++;

                cout << "Account created successfully!" << endl;
            }
            else
            {
                cout << "Account limit 100 reached!" << endl;
            }
            break;

        case 2:
            cout << "Enter Account ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accID[i] == id && active[i] == true)
                {
                    cout << "Enter amount: ";
                    cin >> amount;

                    if (amount > 0)
                    {
                        balance[i] += amount;
                        cout << "Deposit successful!" << endl;
                    }
                    else
                    {
                        cout << "Invalid amount!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account not found!" << endl;
            }
            break;

        case 3:
            cout << "Enter Account ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accID[i] == id && active[i] == true)
                {
                    cout << "Enter amount: ";
                    cin >> amount;

                    if (amount > balance[i])
                    {
                        cout << "Insufficient balance!" << endl;
                    }
                    else if (amount <= 0)
                    {
                        cout << "Invalid amount!" << endl;
                    }
                    else
                    {
                        balance[i] -= amount;
                        cout << "Withdrawal successful!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account not found!" << endl;
            }
            break;

        case 4:
            cout << "Enter Account ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accID[i] == id && active[i] == true)
                {
                    cout << "Balance: " << balance[i] << endl;
                    cout << "Account Found!" << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account not found!" << endl;
            }
            break;

        case 5:
            cout << "Enter Account ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalAccounts; i++)
            {
                if (accID[i] == id && active[i] == true)
                {
                    active[i] = false;
                    cout << "Account deleted successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Account not found!" << endl;
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