/*
=========================================================
                 TIC TAC TOE GAME (C++)
=========================================================

PROJECT DESCRIPTION:
A two-player Tic Tac Toe game on a 3 x 3 board.
Player X and Player O take turns.

FEATURES:
- Board display after every move
- Position input from 1 to 9
- Win check for rows, columns and diagonals
- Draw check and play again option

CONCEPTS USED:
- Arrays (2D char)
- Nested loops
- Conditional statements (if-else)
- Game logic with flags

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
    char board[3][3];
    char player;
    char playAgain;
    int position;
    int row;
    int col;
    int moves;
    bool won;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "          TIC TAC TOE GAME         " << endl;
    cout << "===================================" << endl;

    do
    {
        // ----------- RESET BOARD -----------
        char cell = '1';
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = cell;
                cell++;
            }
        }

        player = 'X';
        moves = 0;
        won = false;

        // ----------- GAME LOOP -----------
        while (!won && moves < 9)
        {
            // Show board
            cout << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
                if (i < 2)
                    cout << "---+---+---" << endl;
            }

            cout << "Player " << player << ", enter position (1 to 9): ";
            cin >> position;

            if (position < 1 || position > 9)
            {
                cout << "Invalid position!" << endl;
                continue;
            }

            row = (position - 1) / 3;
            col = (position - 1) % 3;

            if (board[row][col] == 'X' || board[row][col] == 'O')
            {
                cout << "Position already taken!" << endl;
                continue;
            }

            board[row][col] = player;
            moves++;

            // ----------- WIN CHECK -----------
            for (int i = 0; i < 3; i++)
            {
                if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
                    won = true;

                if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
                    won = true;
            }

            if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
                won = true;

            if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
                won = true;

            // Next player's turn
            if (!won)
            {
                if (player == 'X')
                    player = 'O';
                else
                    player = 'X';
            }
        }

        // ----------- FINAL BOARD AND RESULT -----------
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
            if (i < 2)
                cout << "---+---+---" << endl;
        }

        if (won)
            cout << "Player " << player << " wins!" << endl;
        else
            cout << "It's a draw!" << endl;

        cout << endl << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
