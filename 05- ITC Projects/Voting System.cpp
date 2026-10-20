/*
=========================================================
                   VOTING SYSTEM (C++)
=========================================================

PROJECT DESCRIPTION:
This program runs a simple election between
3 candidates. Each voter ID can vote only once.

FEATURES:
- Cast vote with voter ID
- Stop double voting
- Live vote count
- Declare winner or tie

CONCEPTS USED:
- Arrays (1D only)
- Loops (for, do-while)
- Searching in an array
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
    int votes[3] = {0, 0, 0};
    int votedIds[100];
    int totalVoters = 0;

    int choice;
    int voterId;
    int candidate;
    int maxVotes;
    int winner;
    bool alreadyVoted;
    bool tie;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "           VOTING SYSTEM           " << endl;
    cout << "===================================" << endl;

    // ----------- MAIN MENU -----------
    do
    {
        cout << endl;
        cout << "============ MENU ============" << endl;
        cout << "1. Cast Vote" << endl;
        cout << "2. Show Vote Count" << endl;
        cout << "3. Show Result" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (totalVoters == 100)
            {
                cout << "Voting limit reached!" << endl;
                break;
            }

            cout << "Enter your Voter ID: ";
            cin >> voterId;

            alreadyVoted = false;
            for (int i = 0; i < totalVoters; i++)
            {
                if (votedIds[i] == voterId)
                {
                    alreadyVoted = true;
                    break;
                }
            }

            if (alreadyVoted)
            {
                cout << "You have already voted!" << endl;
                break;
            }

            cout << "1. Candidate A" << endl;
            cout << "2. Candidate B" << endl;
            cout << "3. Candidate C" << endl;
            cout << "Enter candidate number: ";
            cin >> candidate;

            if (candidate >= 1 && candidate <= 3)
            {
                votes[candidate - 1]++;
                votedIds[totalVoters] = voterId;
                totalVoters++;
                cout << "Vote cast successfully!" << endl;
            }
            else
            {
                cout << "Invalid candidate!" << endl;
            }
            break;

        case 2:
            cout << "Candidate A: " << votes[0] << endl;
            cout << "Candidate B: " << votes[1] << endl;
            cout << "Candidate C: " << votes[2] << endl;
            cout << "Total voters: " << totalVoters << endl;
            break;

        case 3:
            if (totalVoters == 0)
            {
                cout << "No votes yet!" << endl;
                break;
            }

            maxVotes = votes[0];
            winner = 0;
            for (int i = 1; i < 3; i++)
            {
                if (votes[i] > maxVotes)
                {
                    maxVotes = votes[i];
                    winner = i;
                }
            }

            // Check if another candidate has the same votes
            tie = false;
            for (int i = 0; i < 3; i++)
            {
                if (i != winner && votes[i] == maxVotes)
                    tie = true;
            }

            if (tie)
                cout << "Result: It's a tie!" << endl;
            else
                cout << "Winner: Candidate " << (char)('A' + winner)
                     << " with " << maxVotes << " votes" << endl;
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
