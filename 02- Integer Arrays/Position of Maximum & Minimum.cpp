#include <iostream>
using namespace std;

int main()
{
    int arr[5], maxPos = 0, minPos = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > arr[maxPos])
            maxPos = i;

        if (arr[i] < arr[minPos])
            minPos = i;
    }

    cout << "Maximum " << arr[maxPos] << " is at index " << maxPos << endl;
    cout << "Minimum " << arr[minPos] << " is at index " << minPos << endl;

    return 0;
}
