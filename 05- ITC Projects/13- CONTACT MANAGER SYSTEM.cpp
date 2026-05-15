/*
=========================================================
        PHONE BOOK / CONTACT MANAGER (C++)
=========================================================

PROJECT DESCRIPTION:
This program manages a simple phone book system.
Users can add, search, delete, and view contacts.

FEATURES:
- Add contact
- Search contact
- Delete contact
- View all contacts

CONCEPTS USED:
- Loops (for, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Boolean logic
- Basic menu system

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
    int contactID[100];
    int phone[100];

    bool active[100];

    int totalContacts = 0;

    int choice;
    int id;
    int number;

    bool found;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        active[i] = false;
        phone[i] = 0;
    }

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "        PHONE BOOK SYSTEM          " << endl;
    cout << "===================================" << endl;

    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Delete Contact" << endl;
        cout << "4. View All Contacts" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            if (totalContacts < 100)
            {
                cout << "Enter Contact ID: ";
                cin >> id;

                cout << "Enter Phone Number: ";
                cin >> number;

                contactID[totalContacts] = id;
                phone[totalContacts] = number;
                active[totalContacts] = true;

                totalContacts++;

                cout << "Contact added successfully!" << endl;
            }
            else
            {
                cout << "Phone book full!" << endl;
            }

            break;

        case 2:

            cout << "Enter Contact ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalContacts; i++)
            {
                if (contactID[i] == id && active[i] == true)
                {
                    cout << "Contact Found!" << endl;
                    cout << "ID: " << contactID[i] << endl;
                    cout << "Phone: " << phone[i] << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Contact not found!" << endl;
            }

            break;

        case 3:

            cout << "Enter Contact ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalContacts; i++)
            {
                if (contactID[i] == id && active[i] == true)
                {
                    active[i] = false;
                    cout << "Contact deleted successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Contact not found!" << endl;
            }

            break;

        case 4:

            cout << endl;
            cout << "======= CONTACT LIST =======" << endl;

            found = false;

            for (int i = 0; i < totalContacts; i++)
            {
                if (active[i] == true)
                {
                    cout << "ID: " << contactID[i]
                         << " | Phone: " << phone[i] << endl;

                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No contacts available!" << endl;
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