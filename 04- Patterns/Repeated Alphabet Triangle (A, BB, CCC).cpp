/*

Structure: Repeated Alphabet Triangle (A, BB, CCC)
Input: 5

    A
    BB
    CCC
    DDDD
    EEEEE

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
            cout << (char)('A' + i - 1);
        }
        cout << endl;
    }

    return 0;
}
