#include <iostream>
using namespace std;

int main()
{
    int arr[5], k = 0, first = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter positions to rotate left: ";
    cin >> k;

    // Rotating 5 times brings the array back, so only k % 5 matters
    k = k % 5;

    // Repeat left rotation by one, k times
    for (int r = 1; r <= k; r++)
    {
        first = arr[0];

        for (int i = 0; i < 4; i++)
            arr[i] = arr[i + 1];

        arr[4] = first;
    }

    cout << "After rotation: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
