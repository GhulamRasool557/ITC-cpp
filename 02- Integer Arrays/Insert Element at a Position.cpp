#include <iostream>
using namespace std;

int main()
{
    int arr[11], size = 10, value = 0, pos = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter value to insert: ";
    cin >> value;

    cout << "Enter position (1 to 11): ";
    cin >> pos;

    if (pos < 1 || pos > size + 1)
    {
        cout << "Invalid position!" << endl;
    }
    else
    {
        // Shift elements right to make space
        for (int i = size; i >= pos; i--)
            arr[i] = arr[i - 1];

        arr[pos - 1] = value;
        size++;

        cout << "Array after insertion: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}
