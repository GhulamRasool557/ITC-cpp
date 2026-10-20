#include <iostream>
using namespace std;

int main()
{
    int arr[10], key = 0;
    int low = 0, high = 9, mid = 0;
    bool found = false;

    cout << "Enter 10 numbers in ascending order: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            found = true;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;   // Search right half
        else
            high = mid - 1;  // Search left half
    }

    if (found)
        cout << "Number found at index " << mid << endl;
    else
        cout << "Number not found" << endl;

    return 0;
}
