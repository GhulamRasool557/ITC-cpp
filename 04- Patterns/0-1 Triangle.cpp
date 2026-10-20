/*

Structure: 0-1 Triangle
Input: 5

    1
    01
    101
    0101
    10101

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
        for (int j = 1; j <= i; j++)
        {
            // Even (i + j) prints 1, odd prints 0
            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }

    return 0;
}
