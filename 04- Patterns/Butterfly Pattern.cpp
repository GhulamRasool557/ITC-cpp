/*

Structure: Butterfly Pattern
Input: 5

    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter rows: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++)
    {
        for (int p = 1; p <= i; p++)
        {
            cout << "*";
        }
        for (int s = 1; s <= 2 * (n - i); s++)
        {
            cout << " ";
        }
        for (int p = 1; p <= i; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        for (int p = 1; p <= i; p++)
        {
            cout << "*";
        }
        for (int s = 1; s <= 2 * (n - i); s++)
        {
            cout << " ";
        }
        for (int p = 1; p <= i; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
