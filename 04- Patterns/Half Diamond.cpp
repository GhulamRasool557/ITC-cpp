/*

Structure: Half Diamond
Input: 5

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter rows: ";
    cin >> n;

    // Growing part
    for (int i = 1; i <= n; i++)
    {
        for (int p = 1; p <= i; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Shrinking part
    for (int i = n - 1; i >= 1; i--)
    {
        for (int p = 1; p <= i; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
