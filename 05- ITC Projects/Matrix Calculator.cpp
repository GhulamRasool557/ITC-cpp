/*
=========================================================
                 MATRIX CALCULATOR (C++)
=========================================================

PROJECT DESCRIPTION:
This program does common operations on two
3 x 3 matrices.

FEATURES:
- Input two 3 x 3 matrices
- Addition, subtraction and multiplication
- Transpose of a matrix
- Diagonal sum

CONCEPTS USED:
- Arrays (2D)
- Nested loops
- Conditional statements (switch)
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
    int a[3][3], b[3][3], result[3][3];
    int choice;
    int which;
    int sum;
    bool entered = false;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "         MATRIX CALCULATOR         " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Enter Matrices" << endl;
        cout << "2. Add (A + B)" << endl;
        cout << "3. Subtract (A - B)" << endl;
        cout << "4. Multiply (A x B)" << endl;
        cout << "5. Transpose" << endl;
        cout << "6. Diagonal Sum" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 2 && choice <= 6 && !entered)
        {
            cout << "Enter matrices first (option 1)!" << endl;
            continue;
        }

        switch (choice)
        {
        case 1:
            cout << "Enter matrix A (9 numbers):" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                    cin >> a[i][j];
            }

            cout << "Enter matrix B (9 numbers):" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                    cin >> b[i][j];
            }

            entered = true;
            cout << "Matrices saved!" << endl;
            break;

        case 2:
        case 3:
        case 4:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (choice == 2)
                    {
                        result[i][j] = a[i][j] + b[i][j];
                    }
                    else if (choice == 3)
                    {
                        result[i][j] = a[i][j] - b[i][j];
                    }
                    else
                    {
                        result[i][j] = 0;
                        for (int k = 0; k < 3; k++)
                            result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            cout << "Result:" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                    cout << result[i][j] << "\t";
                cout << endl;
            }
            break;

        case 5:
        case 6:
            cout << "Which matrix? (1 = A, 2 = B): ";
            cin >> which;

            // Copy the chosen matrix into result
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (which == 2)
                        result[i][j] = b[i][j];
                    else
                        result[i][j] = a[i][j];
                }
            }

            if (choice == 5)
            {
                cout << "Transpose:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                        cout << result[j][i] << "\t";
                    cout << endl;
                }
            }
            else
            {
                sum = 0;
                for (int i = 0; i < 3; i++)
                    sum += result[i][i];

                cout << "Diagonal sum: " << sum << endl;
            }
            break;

        case 7:
            cout << "Exiting calculator..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}
