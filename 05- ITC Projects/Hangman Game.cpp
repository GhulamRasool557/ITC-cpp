/*
=========================================================
                   HANGMAN GAME (C++)
=========================================================

PROJECT DESCRIPTION:
A two-player word guessing game. Player 1 hides
a word, Player 2 guesses it one letter at a time.

FEATURES:
- Secret word set by Player 1
- Hidden word shown with dashes
- 6 wrong guesses allowed
- Repeated guess check and play again option

CONCEPTS USED:
- Arrays (1D char)
- Loops (for, while, do-while)
- Conditional statements (if-else)
- Character case conversion without built-in functions

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
    char word[30];
    char shown[30];
    char guessed[26];
    int length;
    int wrong;
    int maxWrong = 6;
    int guessCount;
    char letter;
    char playAgain;
    bool found;
    bool repeated;
    bool complete;
    bool valid;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "            HANGMAN GAME           " << endl;
    cout << "===================================" << endl;

    do
    {
        // ----------- PLAYER 1 HIDES WORD -----------
        do
        {
            cout << endl << "Player 1, enter a secret word (letters only, max 29): ";
            cin >> word;

            // Change to small letters and check every character is a letter
            valid = true;
            length = 0;
            while (word[length] != '\0')
            {
                if (word[length] >= 'A' && word[length] <= 'Z')
                    word[length] = word[length] + 32;

                if (word[length] < 'a' || word[length] > 'z')
                    valid = false;

                length++;
            }

            if (!valid)
                cout << "Letters only, please!" << endl;

        } while (!valid);

        // Push the word off the screen
        for (int i = 0; i < 30; i++)
            cout << endl;

        for (int i = 0; i < length; i++)
            shown[i] = '_';
        shown[length] = '\0';

        wrong = 0;
        guessCount = 0;
        complete = false;

        // ----------- PLAYER 2 GUESSES -----------
        while (wrong < maxWrong && !complete)
        {
            cout << endl << "Word: ";
            for (int i = 0; i < length; i++)
                cout << shown[i] << " ";
            cout << endl;

            cout << "Wrong guesses left: " << maxWrong - wrong << endl;
            cout << "Player 2, guess a letter: ";
            cin >> letter;

            if (letter >= 'A' && letter <= 'Z')
                letter = letter + 32;

            if (letter < 'a' || letter > 'z')
            {
                cout << "Enter a letter!" << endl;
                continue;
            }

            // Check repeated guess
            repeated = false;
            for (int i = 0; i < guessCount; i++)
            {
                if (guessed[i] == letter)
                    repeated = true;
            }

            if (repeated)
            {
                cout << "You already guessed " << letter << "!" << endl;
                continue;
            }

            guessed[guessCount] = letter;
            guessCount++;

            // Reveal the letter
            found = false;
            for (int i = 0; i < length; i++)
            {
                if (word[i] == letter)
                {
                    shown[i] = letter;
                    found = true;
                }
            }

            if (found)
            {
                cout << "Good guess!" << endl;
            }
            else
            {
                cout << "Wrong guess!" << endl;
                wrong++;
            }

            // Check if the whole word is revealed
            complete = true;
            for (int i = 0; i < length; i++)
            {
                if (shown[i] == '_')
                    complete = false;
            }
        }

        // ----------- RESULT -----------
        if (complete)
            cout << endl << "You win! The word was " << word << endl;
        else
            cout << endl << "You lose! The word was " << word << endl;

        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
