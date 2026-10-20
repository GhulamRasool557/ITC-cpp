/*

Structure: Palindrome Number Pyramid
Input: 5

        1
       121
      12321
     1234321
    123454321

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
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        // Count up: 1 2 ... i
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Count down: i-1 ... 1
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
