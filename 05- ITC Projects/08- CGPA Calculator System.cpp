/*
=========================================================
           CGPA CALCULATOR SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program calculates semester GPA and final CGPA
for students using basic programming concepts.

FEATURES:
- Add student
- Enter semester GPA
- Calculate CGPA
- Display academic status

CONCEPTS USED:
- Loops (for, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Basic calculations
- Menu-driven programming

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
    int rollNo[100];

    float sem1[100];
    float sem2[100];
    float sem3[100];
    float sem4[100];

    float cgpa[100];

    bool active[100];

    int totalStudents = 0;

    int choice;
    int roll;

    bool found;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        active[i] = false;

        sem1[i] = 0;
        sem2[i] = 0;
        sem3[i] = 0;
        sem4[i] = 0;

        cgpa[i] = 0;
    }

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "      CGPA CALCULATOR SYSTEM       " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;

        cout << "1. Add Student" << endl;
        cout << "2. Enter Semester GPA" << endl;
        cout << "3. Show CGPA Report" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            if (totalStudents < 100)
            {
                cout << "Enter Roll Number: ";
                cin >> roll;

                rollNo[totalStudents] = roll;

                active[totalStudents] = true;

                totalStudents++;

                cout << "Student added successfully!" << endl;
            }
            else
            {
                cout << "Student limit reached!" << endl;
            }

            break;

        case 2:

            cout << "Enter Roll Number: ";
            cin >> roll;

            found = false;

            for (int i = 0; i < totalStudents; i++)
            {
                if (rollNo[i] == roll &&
                    active[i] == true)
                {
                    cout << "Enter Semester 1 GPA: ";
                    cin >> sem1[i];

                    cout << "Enter Semester 2 GPA: ";
                    cin >> sem2[i];

                    cout << "Enter Semester 3 GPA: ";
                    cin >> sem3[i];

                    cout << "Enter Semester 4 GPA: ";
                    cin >> sem4[i];

                    cgpa[i] =
                        (sem1[i] +
                         sem2[i] +
                         sem3[i] +
                         sem4[i]) /
                        4.0;

                    cout << "GPA record saved successfully!"
                         << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Student not found!" << endl;
            }

            break;

        case 3:

            cout << "Enter Roll Number: ";
            cin >> roll;

            found = false;

            for (int i = 0; i < totalStudents; i++)
            {
                if (rollNo[i] == roll &&
                    active[i] == true)
                {
                    cout << endl;
                    cout << "=========== CGPA REPORT ==========="
                         << endl;

                    cout << "Roll Number: "
                         << rollNo[i] << endl;

                    cout << "Semester 1 GPA: "
                         << sem1[i] << endl;

                    cout << "Semester 2 GPA: "
                         << sem2[i] << endl;

                    cout << "Semester 3 GPA: "
                         << sem3[i] << endl;

                    cout << "Semester 4 GPA: "
                         << sem4[i] << endl;

                    cout << "Final CGPA: "
                         << cgpa[i] << endl;

                    // ----------- STATUS -----------
                    if (cgpa[i] >= 3.5)
                    {
                        cout << "Status: EXCELLENT"
                             << endl;
                    }
                    else if (cgpa[i] >= 3.0)
                    {
                        cout << "Status: GOOD"
                             << endl;
                    }
                    else if (cgpa[i] >= 2.0)
                    {
                        cout << "Status: AVERAGE"
                             << endl;
                    }
                    else
                    {
                        cout << "Status: POOR"
                             << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Student not found!" << endl;
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