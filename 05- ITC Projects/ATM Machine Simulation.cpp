/*
=========================================================
                ATM MACHINE SIMULATION (C++)
=========================================================

PROJECT DESCRIPTION:
This is a simple ATM Machine Simulation program written
in C++. It demonstrates how a basic banking system works
using menu-driven programming.

FEATURES:
- PIN-based login system (3 attempts allowed)
- Check account balance
- Deposit money
- Withdraw money with validation
- Exit system safely

CONCEPTS USED:
- Loops (while, do-while)
- Conditional statements (if-else, switch)
- Basic authentication logic
- Menu-driven program design

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
    // -------------- SYSTEM DATA --------------
    int pin = 1234;   // Stored system PIN
    int enteredPin = 0;   // User input PIN
    int attempts = 0; // Wrong PIN attempts counter

    double balance = 10000; // Initial account balance
    int choice;             // Menu selection
    double amount;          // Deposit/withdraw amount

    // -------------- WELCOME SCREEN --------------
    cout << "==============================" << endl;
    cout << "      WELCOME TO ATM SYSTEM   " << endl;
    cout << "==============================" << endl;

    // -------------- PIN AUTHENTICATION --------------
    while (attempts < 3)
    {
        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin)
        {
            cout << endl << "Login Successful!" << endl;
            break;
        }
        else
        {
            cout << "Incorrect PIN. Try again." << endl;
        }

        attempts++;
    }

    if (attempts == 3)
    {
        cout << "Too many failed attempts. Card blocked!" << endl;
        return 0;
    }

    // ---------------- MAIN MENU ----------------
    do
    {
        cout << endl << "======== ATM MENU ========" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl << "Your current balance is: " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "Deposit successful!" << endl;
            }
            else
            {
                cout << "Invalid amount!" << endl;
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Insufficient balance!" << endl;
            }
            else if (amount <= 0)
            {
                cout << "Invalid amount!" << endl;
            }
            else
            {
                balance -= amount;
                cout << "Please collect your cash." << endl;
            }
            break;

        case 4:
            cout << "Thank you for using ATM. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}