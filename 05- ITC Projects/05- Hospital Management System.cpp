/*
=========================================================
        HOSPITAL MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program simulates a simple hospital system where
patients are registered, assigned doctors, and their
basic status is tracked.

FEATURES:
- Add patient records
- Assign doctor to patient
- View patient details
- Discharge patient
- Track active patients

CONCEPTS USED:
- Loops (for, while, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Boolean logic
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
    int patientID[100];
    int doctorID[100];
    bool active[100];

    int totalPatients = 0;

    int choice;
    int id;
    int doc;
    bool found;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        active[i] = false;
        doctorID[i] = 0;
    }

    // ----------- WELCOME -----------
    cout << "==============================" << endl;
    cout << "   HOSPITAL MANAGEMENT SYSTEM " << endl;
    cout << "==============================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl
             << "========= MENU =========" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. Assign Doctor" << endl;
        cout << "3. View Patient Details" << endl;
        cout << "4. Discharge Patient" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (totalPatients < 100)
            {
                cout << "Enter Patient ID: ";
                cin >> id;

                patientID[totalPatients] = id;
                doctorID[totalPatients] = 0;
                active[totalPatients] = true;

                totalPatients++;

                cout << "Patient added successfully!" << endl;
            }
            else
            {
                cout << "Hospital is full!" << endl;
            }
            break;

        case 2:
            cout << "Enter Patient ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalPatients; i++)
            {
                if (patientID[i] == id && active[i] == true)
                {
                    cout << "Enter Doctor ID: ";
                    cin >> doc;

                    doctorID[i] = doc;

                    cout << "Doctor assigned successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Patient not found!" << endl;
            }
            break;

        case 3:
            cout << "Enter Patient ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalPatients; i++)
            {
                if (patientID[i] == id && active[i] == true)
                {
                    cout << "Patient ID: " << patientID[i] << endl;
                    if (doctorID[i] == 0)
                    {
                        cout << "Doctor is Not assigned yet !" << endl;
                    }
                    else
                    {
                        cout << "Doctor ID: " << doctorID[i] << endl;
                    }
                    cout << "Status: ADMITTED" << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Patient not found!" << endl;
            }
            break;

        case 4:
            cout << "Enter Patient ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < totalPatients; i++)
            {
                if (patientID[i] == id && active[i] == true)
                {
                    active[i] = false;
                    doctorID[i] = 0;

                    cout << "Patient discharged successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Patient not found!" << endl;
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