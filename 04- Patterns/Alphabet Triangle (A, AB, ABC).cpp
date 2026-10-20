/*

Structure: Alphabet Triangle (A, AB, ABC)
Input: 5

    A
    AB
    ABC
    ABCD
    ABCDE

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
        for (int j = 0; j < i; j++)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    return 0;
}
