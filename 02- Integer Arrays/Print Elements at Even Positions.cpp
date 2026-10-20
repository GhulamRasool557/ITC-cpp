#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    // Index 0, 2, 4 ... are the even positions
    cout << "Elements at even positions: ";
    for (int i = 0; i < 10; i += 2)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
