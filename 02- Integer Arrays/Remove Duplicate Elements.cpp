#include <iostream>
using namespace std;

int main()
{
    int arr[10], unique[10], size = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++)
    {
        bool alreadyAdded = false;

        for (int j = 0; j < size; j++)
        {
            if (unique[j] == arr[i])
            {
                alreadyAdded = true;
                break;
            }
        }

        if (!alreadyAdded)
        {
            unique[size] = arr[i];
            size++;
        }
    }

    cout << "Array without duplicates: ";
    for (int i = 0; i < size; i++)
        cout << unique[i] << " ";
    cout << endl;

    return 0;
}
