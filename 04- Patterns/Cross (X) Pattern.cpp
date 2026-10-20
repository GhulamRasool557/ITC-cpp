/*

Structure: Cross (X) Pattern
Input: 5

    *   *
     * * 
      *  
     * * 
    *   *

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
            // Star on both diagonals
            if (j == i || j == n - i + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
