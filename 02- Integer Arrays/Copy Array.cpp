#include <iostream>
using namespace std;

int main()
{
    int arr[5], copy[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 5; i++)
        copy[i] = arr[i];

    cout << "Copied array: ";
    for (int i = 0; i < 5; i++)
        cout << copy[i] << " ";

    return 0;
}