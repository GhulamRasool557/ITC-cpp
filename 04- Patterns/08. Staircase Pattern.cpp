/*

Structure: Staircase Pattern
Input: 5

    *
     *
      *
       *
        *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i)
                cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}