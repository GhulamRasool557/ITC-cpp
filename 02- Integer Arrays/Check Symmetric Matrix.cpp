#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    bool symmetric = true;

    cout << "Enter 9 numbers (3 x 3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }

    // A matrix is symmetric if it equals its transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != arr[j][i])
                symmetric = false;
        }
    }

    if (symmetric)
        cout << "Matrix is Symmetric" << endl;
    else
        cout << "Matrix is Not Symmetric" << endl;

    return 0;
}
