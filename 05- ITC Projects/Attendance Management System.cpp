/*
=========================================================
      ATTENDANCE MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program manages student attendance records.
It allows marking attendance and calculating
attendance percentage.

FEATURES:
- Add students
- Mark present/absent
- View attendance report
- Calculate attendance percentage
- Track total classes

CONCEPTS USED:
- Loops (for, do-while)
- Conditional statements (if-else, switch)
- Arrays (1D only)
- Boolean logic
- Basic calculations

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

    int presentCount[100];
    int totalClasses[100];

    bool active[100];

    int totalStudents = 0;

    int choice;
    int roll;
    int attendanceChoice;

    bool found;

    int percentage;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        active[i] = false;
        presentCount[i] = 0;
        totalClasses[i] = 0;
    }

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "   ATTENDANCE MANAGEMENT SYSTEM    " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Mark Attendance" << endl;
        cout << "3. View Attendance Report" << endl;
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

                presentCount[totalStudents] = 0;
                totalClasses[totalStudents] = 0;

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
                if (rollNo[i] == roll && active[i] == true)
                {
                    cout << "1. Present" << endl;
                    cout << "2. Absent" << endl;

                    cout << "Enter attendance choice: ";
                    cin >> attendanceChoice;

                    totalClasses[i]++;

                    if (attendanceChoice == 1)
                    {
                        presentCount[i]++;

                        cout << "Marked PRESENT" << endl;
                    }
                    else if (attendanceChoice == 2)
                    {
                        cout << "Marked ABSENT" << endl;
                    }
                    else
                    {
                        totalClasses[i]--;

                        cout << "Invalid choice!" << endl;
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

        case 3:

            cout << "Enter Roll Number: ";
            cin >> roll;

            found = false;

            for (int i = 0; i < totalStudents; i++)
            {
                if (rollNo[i] == roll && active[i] == true)
                {
                    cout << endl;
                    cout << "======= ATTENDANCE REPORT =======" << endl;

                    cout << "Roll Number: "
                         << rollNo[i] << endl;

                    cout << "Total Classes: "
                         << totalClasses[i] << endl;

                    cout << "Present Count: "
                         << presentCount[i] << endl;

                    if (totalClasses[i] > 0)
                    {
                        percentage =
                            (presentCount[i] * 100) / totalClasses[i];
                    }
                    else
                    {
                        percentage = 0;
                    }

                    cout << "Attendance Percentage: "
                         << percentage << "%" << endl;

                    if (percentage >= 75)
                    {
                        cout << "Status: GOOD" << endl;
                    }
                    else
                    {
                        cout << "Status: SHORT ATTENDANCE" << endl;
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