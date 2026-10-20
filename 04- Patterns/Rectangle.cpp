/*

Structure: Rectangle
Input: row = 3, cols = 10

    **********
    **********
    **********

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

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}