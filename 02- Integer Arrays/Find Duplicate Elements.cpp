#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    bool printed[10] = {false};
    bool anyDuplicate = false;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Duplicate elements: ";
    for (int i = 0; i < 10; i++)
    {
        if (printed[i])
            continue;

        bool duplicate = false;

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                printed[j] = true; // Don't print this value again
            }
        }

        if (duplicate)
        {
            cout << arr[i] << " ";
            anyDuplicate = true;
        }
    }

    if (!anyDuplicate)
        cout << "None";
    cout << endl;

    return 0;
}
