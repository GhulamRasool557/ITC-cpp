/*
=========================================================
        STUDENT MANAGEMENT SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program manages student records including marks,
percentage, grading and Pass/Fail. It demonstrates basic record handling
using arrays and logic-based processing.

FEATURES:
- Add student records
- Enter marks of subjects
- Calculate percentage
- Assign Gardes
- Assign pass/fail status
- Find top student (simple ranking)

CONCEPTS USED:
- Loops (for, while, do-while)
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
    int roll[100];
    int marks[100];
    bool active[100];

    int totalStudents = 0;

    int choice;
    int rollNo;
    int st_marks;

    bool found;

    int highestIndex = 0;

    // ----------- INITIALIZE -----------
    for (int i = 0; i < 100; i++)
    {
        active[i] = false;
    }

    // ----------- WELCOME -----------
    cout << "==============================" << endl;
    cout << "   STUDENT MANAGEMENT SYSTEM  " << endl;
    cout << "==============================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl
             << "========= MENU =========" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Enter Marks" << endl;
        cout << "3. Show Student Result" << endl;
        cout << "4. Show Top Student" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (totalStudents < 100)
            {
                cout << "Enter Roll Number: ";
                cin >> rollNo;

                roll[totalStudents] = rollNo;
                marks[totalStudents] = 0;
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
            cin >> rollNo;

            found = false;

            for (int i = 0; i < totalStudents; i++)
            {
                if (roll[i] == rollNo && active[i] == true)
                {
                    cout << "Enter Marks (out of 100): ";
                    cin >> st_marks;

                    if (st_marks >= 0 && st_marks <= 100)
                    {
                        marks[i] = st_marks;

                        cout << "Marks saved successfully!" << endl;
                    }
                    else
                    {
                        cout << "Invalid marks!" << endl;
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
            cin >> rollNo;

            found = false;

            for (int i = 0; i < totalStudents; i++)
            {
                if (roll[i] == rollNo && active[i] == true)
                {
                    cout << "Roll No: " << roll[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                    cout << "Percentage: " << (float)marks[i] / 100 << endl; // Type casting

                    if (marks[i] >= 95 && marks[i] <= 100)
                    {
                        cout << "Grade: A+" << endl;
                    }
                    else if (marks[i] >= 90 && marks[i] <= 94)
                    {
                        cout << "Grade: A" << endl;
                    }
                    else if (marks[i] >= 85 && marks[i] <= 89)
                    {
                        cout << "Grade: B+" << endl;
                    }
                    else if (marks[i] >= 80 && marks[i] <= 84)
                    {
                        cout << "Grade: B" << endl;
                    }
                    else if (marks[i] >= 75 && marks[i] <= 79)
                    {
                        cout << "Grade: C+" << endl;
                    }
                    else if (marks[i] >= 70 && marks[i] <= 74)
                    {
                        cout << "Grade: C" << endl;
                    }
                    else if (marks[i] >= 60 && marks[i] <= 69)
                    {
                        cout << "Grade: D+" << endl;
                    }
                    else if (marks[i] >= 50 && marks[i] <= 59)
                    {
                        cout << "Grade: D" << endl;
                    }
                    else
                    {
                        cout << "Grade: F" << endl;
                    }

                    if (marks[i] >= 50)
                        cout << "Result: PASS" << endl;
                    else
                        cout << "Result: FAIL" << endl;

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
            if (totalStudents == 0)
            {
                cout << "No students available!" << endl;
                break;
            }

            highestIndex = 0;

            for (int i = 1; i < totalStudents; i++)
            {
                if (marks[i] > marks[highestIndex])
                {
                    highestIndex = i;
                }
            }

            cout << "Top Student Details:" << endl;
            cout << "Roll No: " << roll[highestIndex] << endl;
            cout << "Marks: " << marks[highestIndex] << endl;
            cout << "Percentage: " << (float)marks[highestIndex] / 100 << endl; // Type casting

            if (marks[highestIndex] >= 95 && marks[highestIndex] <= 100)
            {
                cout << "Grade: A+" << endl;
            }
            else if (marks[highestIndex] >= 90 && marks[highestIndex] <= 94)
            {
                cout << "Grade: A" << endl;
            }
            else if (marks[highestIndex] >= 85 && marks[highestIndex] <= 89)
            {
                cout << "Grade: B+" << endl;
            }
            else if (marks[highestIndex] >= 80 && marks[highestIndex] <= 84)
            {
                cout << "Grade: B" << endl;
            }
            else if (marks[highestIndex] >= 75 && marks[highestIndex] <= 79)
            {
                cout << "Grade: C+" << endl;
            }
            else if (marks[highestIndex] >= 70 && marks[highestIndex] <= 74)
            {
                cout << "Grade: C" << endl;
            }
            else if (marks[highestIndex] >= 60 && marks[highestIndex] <= 69)
            {
                cout << "Grade: D+" << endl;
            }
            else if (marks[highestIndex] >= 50 && marks[highestIndex] <= 59)
            {
                cout << "Grade: D" << endl;
            }
            else
            {
                cout << "Grade: F" << endl;
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