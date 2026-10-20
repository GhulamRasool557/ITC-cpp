#include <iostream>
using namespace std;

int main()
{
    int arr[5], last = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    last = arr[4];

    // Shift every element one step right
    for (int i = 4; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;

    cout << "After right rotation: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
