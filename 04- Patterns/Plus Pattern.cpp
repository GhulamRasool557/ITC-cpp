/*

Structure: Plus Pattern
Input: 5

      *  
      *  
    *****
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

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // Star on the middle row and middle column
            if (i == mid || j == mid)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
