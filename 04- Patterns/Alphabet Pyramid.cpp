/*

Structure: Alphabet Pyramid
Input: 5

        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA

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

        // A B C ... up to the i-th letter
        for (int j = 0; j < i; j++)
        {
            cout << (char)('A' + j);
        }

        // ... back down to A
        for (int j = i - 2; j >= 0; j--)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    return 0;
}
