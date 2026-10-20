#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], sum = 0;

    cout << "Enter 9 numbers (3 x 3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += arr[i][j];

        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    for (int j = 0; j < 3; j++)
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
            sum += arr[i][j];

        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
