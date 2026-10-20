#include <iostream>
using namespace std;

int main()
{
    int arr[5], minIndex = 0, temp = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 4; i++)
    {
        // Find the smallest element in the unsorted part
        minIndex = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Put it at position i
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
