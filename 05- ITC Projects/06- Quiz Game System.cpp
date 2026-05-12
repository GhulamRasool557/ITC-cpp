/*
=========================================================
           QUIZ GAME SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program simulates a simple MCQ Quiz Game.
The user answers multiple-choice questions and
the system calculates the final score.

FEATURES:
- Multiple MCQ questions
- Answer checking
- Score calculation
- Final result display
- Pass/Fail status

CONCEPTS USED:
- Loops (for, do-while)
- Conditional statements (if-else, switch)
- Variables and counters
- Menu-driven logic

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
    int choice;
    int answer;
    int score = 0;

    // ----------- WELCOME -----------
    cout << "==============================" << endl;
    cout << "        QUIZ GAME SYSTEM      " << endl;
    cout << "==============================" << endl;

    // ----------- START MENU -----------
    do
    {
        cout << endl
             << "========= MENU =========" << endl;
        cout << "1. Start Quiz" << endl;
        cout << "2. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            score = 0;

            // ----------- QUESTION 1 -----------
            cout << endl;
            cout << "Q1. Which symbol is used for output in C++?" << endl;
            cout << "1. >>" << endl;
            cout << "2. <<" << endl;
            cout << "3. ==" << endl;
            cout << "4. &&" << endl;

            cout << "Enter answer: ";
            cin >> answer;

            if (answer == 2)
            {
                cout << "Correct Answer!" << endl;
                score++;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
            }

            // ----------- QUESTION 2 -----------
            cout << endl;
            cout << "Q2. Which loop is called entry-controlled loop?" << endl;
            cout << "1. while" << endl;
            cout << "2. do-while" << endl;
            cout << "3. switch" << endl;
            cout << "4. if" << endl;

            cout << "Enter answer: ";
            cin >> answer;

            if (answer == 1)
            {
                cout << "Correct Answer!" << endl;
                score++;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
            }

            // ----------- QUESTION 3 -----------
            cout << endl;
            cout << "Q3. Which data type stores decimal values?" << endl;
            cout << "1. int" << endl;
            cout << "2. char" << endl;
            cout << "3. float" << endl;
            cout << "4. bool" << endl;

            cout << "Enter answer: ";
            cin >> answer;

            if (answer == 3)
            {
                cout << "Correct Answer!" << endl;
                score++;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
            }

            // ----------- QUESTION 4 -----------
            cout << endl;
            cout << "Q4. Which statement is used for decision making?" << endl;
            cout << "1. for" << endl;
            cout << "2. if" << endl;
            cout << "3. cout" << endl;
            cout << "4. break" << endl;

            cout << "Enter answer: ";
            cin >> answer;

            if (answer == 2)
            {
                cout << "Correct Answer!" << endl;
                score++;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
            }

            // ----------- QUESTION 5 -----------
            cout << endl;
            cout << "Q5. Which operator is used for equality check?" << endl;
            cout << "1. =" << endl;
            cout << "2. !=" << endl;
            cout << "3. ==" << endl;
            cout << "4. +=" << endl;

            cout << "Enter answer: ";
            cin >> answer;

            if (answer == 3)
            {
                cout << "Correct Answer!" << endl;
                score++;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
            }

            // ----------- FINAL RESULT -----------
            cout << endl;
            cout << "==============================" << endl;
            cout << "         QUIZ RESULT          " << endl;
            cout << "==============================" << endl;

            cout << "Total Score: " << score << " / 5" << endl;

            if (score >= 3)
            {
                cout << "Status: PASS" << endl;
            }
            else
            {
                cout << "Status: FAIL" << endl;
            }

            break;

        case 2:
            cout << "Exiting system..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 2);

    return 0;
}