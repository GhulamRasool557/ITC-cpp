#include <iostream>
using namespace std;

int main()
{
    int arr[10], size = 10, pos = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter position to delete (1 to 10): ";
    cin >> pos;

    if (pos < 1 || pos > size)
    {
        cout << "Invalid position!" << endl;
    }
    else
    {
        // Shift elements left to fill the gap
        for (int i = pos - 1; i < size - 1; i++)
            arr[i] = arr[i + 1];

        size--;

        cout << "Array after deletion: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}
