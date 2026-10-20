#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5], merged[10];

    cout << "Enter 5 numbers of first array: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter 5 numbers of second array: ";
    for (int i = 0; i < 5; i++)
        cin >> b[i];

    // First array goes in index 0 to 4
    for (int i = 0; i < 5; i++)
        merged[i] = a[i];

    // Second array goes in index 5 to 9
    for (int i = 0; i < 5; i++)
        merged[i + 5] = b[i];

    cout << "Merged array: ";
    for (int i = 0; i < 10; i++)
        cout << merged[i] << " ";
    cout << endl;

    return 0;
}
