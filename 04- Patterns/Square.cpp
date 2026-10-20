/*

Structure: Square
Input: 5

    *****
    *****
    *****
    *****
    *****

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}