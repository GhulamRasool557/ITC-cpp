#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], largest = 0;

    cout << "Enter 9 numbers (3 x 3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        largest = arr[i][0];
        for (int j = 1; j < 3; j++)
        {
            if (arr[i][j] > largest)
                largest = arr[i][j];
        }

        cout << "Largest in row " << i + 1 << " = " << largest << endl;
    }

    return 0;
}
