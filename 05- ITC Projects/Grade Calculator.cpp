/*
=========================================================
                 GRADE CALCULATOR (C++)
=========================================================

PROJECT DESCRIPTION:
This program takes marks of 5 subjects and
calculates total, percentage and grade.

FEATURES:
- Marks input for 5 subjects with validation
- Total and percentage
- Grade from A to F
- Pass or fail for each subject

CONCEPTS USED:
- Arrays (1D only)
- Loops (for, while)
- Conditional statements (if-else ladder)
- Basic arithmetic operations

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
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "         GRADE CALCULATOR          " << endl;
    cout << "===================================" << endl;

    // ----------- MARKS INPUT -----------
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of subject " << i + 1 << " (0 to 100): ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid! Enter marks between 0 and 100: ";
            cin >> marks[i];
        }

        total += marks[i];
    }

    // ----------- CALCULATION -----------
    percentage = (float)total / 5;

    if (percentage >= 85)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';

    // ----------- RESULT CARD -----------
    cout << endl;
    cout << "========== RESULT CARD ==========" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": " << marks[i];

        if (marks[i] >= 50)
            cout << " (Pass)" << endl;
        else
            cout << " (Fail)" << endl;
    }

    cout << "---------------------------------" << endl;
    cout << "Total: " << total << " / 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
