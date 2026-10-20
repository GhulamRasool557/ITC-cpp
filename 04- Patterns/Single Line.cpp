/*

Structure: Single line
Input: 5

    *****

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter number of stars: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }

    cout << endl;

    return 0;
}