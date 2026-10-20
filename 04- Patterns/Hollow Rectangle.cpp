/*

Structure: Hollow Rectangle
Input: Rows: 4, Columns: 8

    ********
    *      *
    *      *
    ********

*/

#include <iostream>
using namespace std;

int main()
{
    int rows = 0, cols = 0;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            // Stars only on the border
            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
