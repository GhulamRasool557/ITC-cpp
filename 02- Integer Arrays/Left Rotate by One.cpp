#include <iostream>
using namespace std;

int main()
{
    int arr[5], first = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    first = arr[0];

    // Shift every element one step left
    for (int i = 0; i < 4; i++)
        arr[i] = arr[i + 1];

    arr[4] = first;

    cout << "After left rotation: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
