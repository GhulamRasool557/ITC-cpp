/*
=========================================================
               NUMBER GUESSING GAME (C++)
=========================================================

PROJECT DESCRIPTION:
Player 1 hides a secret number between 1 and 100.
Player 2 tries to guess it with hints.

FEATURES:
- Secret number set by Player 1
- Higher / lower hints
- Limited attempts (7)
- Play again option

CONCEPTS USED:
- Loops (while, do-while)
- Conditional statements (if-else)
- Counters and flags
- Two-player game logic

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
    int secret;
    int guess;
    int attempts;
    int maxAttempts = 7;
    char playAgain;
    bool won;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "       NUMBER GUESSING GAME        " << endl;
    cout << "===================================" << endl;

    do
    {
        // ----------- PLAYER 1 HIDES NUMBER -----------
        cout << endl << "Player 1, enter secret number (1 to 100): ";
        cin >> secret;

        while (secret < 1 || secret > 100)
        {
            cout << "Invalid! Enter number between 1 and 100: ";
            cin >> secret;
        }

        // Push the secret number off the screen
        for (int i = 0; i < 30; i++)
            cout << endl;

        // ----------- PLAYER 2 GUESSES -----------
        attempts = 0;
        won = false;

        cout << "Player 2, you have " << maxAttempts << " attempts." << endl;

        while (attempts < maxAttempts)
        {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == secret)
            {
                won = true;
                break;
            }
            else if (guess < secret)
                cout << "Too low! Try higher." << endl;
            else
                cout << "Too high! Try lower." << endl;

            cout << "Attempts left: " << maxAttempts - attempts << endl;
        }

        // ----------- RESULT -----------
        if (won)
            cout << "Correct! You guessed it in " << attempts << " attempts." << endl;
        else
            cout << "Game over! The number was " << secret << endl;

        cout << endl << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
