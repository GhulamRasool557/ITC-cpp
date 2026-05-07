/*
=========================================================
         LIBRARY MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program simulates a simple Library System.
Users can issue and return books while the system
tracks availability.

FEATURES:
- Add books to library
- Issue books
- Return books
- Check book availability
- Simple tracking using arrays

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
    int bookID[100];
    bool issued[100];

    int totalBooks = 0;

    int choice;
    int id;
    bool found;
    bool exist;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        issued[i] = false;
    }

    // ----------- WELCOME -----------
    cout << "==============================" << endl;
    cout << "     LIBRARY MANAGEMENT       " << endl;
    cout << "==============================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl
             << "========= MENU =========" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Issue Book" << endl;
        cout << "3. Return Book" << endl;
        cout << "4. Check Availability" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (totalBooks < 3)
            {
                cout << "Enter Book ID: ";
                cin >> id;

                exist = false;

                for (int i = 0; i < totalBooks; i++)
                {
                    if (bookID[i] == id)
                    {
                        exist = true;
                    }
                }

                if (exist == true)
                {
                    cout << "Book already exits" << endl;
                }
                else
                {
                    bookID[totalBooks] = id;
                    issued[totalBooks] = false;

                    totalBooks++;

                    cout << "Book added successfully!" << endl;
                }
            }
            else
            {
                cout << "Library is full!" << endl;
            }
            break;

        case 2:
            cout << "Enter Book ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalBooks; i++)
            {
                if (bookID[i] == id)
                {
                    if (issued[i] == false)
                    {
                        issued[i] = true;
                        cout << "Book issued successfully!" << endl;
                    }
                    else
                    {
                        cout << "Book already issued!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Book not found!" << endl;
            }
            break;

        case 3:
            cout << "Enter Book ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalBooks; i++)
            {
                if (bookID[i] == id)
                {
                    if (issued[i] == true)
                    {
                        issued[i] = false;
                        cout << "Book returned successfully!" << endl;
                    }
                    else
                    {
                        cout << "Book was not issued!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Book not found!" << endl;
            }
            break;

        case 4:
            cout << "Enter Book ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalBooks; i++)
            {
                if (bookID[i] == id)
                {
                    if (issued[i] == false)
                    {
                        cout << "Book is AVAILABLE" << endl;
                    }
                    else
                    {
                        cout << "Book is ISSUED" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Book not found!" << endl;
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