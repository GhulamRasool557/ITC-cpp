/*

Structure: Diamond
Input: 5

        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter rows: ";
    cin >> n;

    // Upper half (pyramid)
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int p = 1; p <= 2 * i - 1; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half (inverted pyramid without the middle row)
    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int p = 1; p <= 2 * i - 1; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
