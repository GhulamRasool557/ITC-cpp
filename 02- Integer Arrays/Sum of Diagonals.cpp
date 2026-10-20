#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], mainSum = 0, otherSum = 0;

    cout << "Enter 9 numbers (3 x 3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        mainSum += arr[i][i];          // Top-left to bottom-right
        otherSum += arr[i][2 - i];     // Top-right to bottom-left
    }

    cout << "Main diagonal sum = " << mainSum << endl;
    cout << "Other diagonal sum = " << otherSum << endl;

    return 0;
}
