#include <iostream>
using namespace std;

int main()
{
    int arr[10], even[10], odd[10];
    int evenCount = 0, oddCount = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    cout << "Even array: ";
    for (int i = 0; i < evenCount; i++)
        cout << even[i] << " ";
    cout << endl;

    cout << "Odd array: ";
    for (int i = 0; i < oddCount; i++)
        cout << odd[i] << " ";
    cout << endl;

    return 0;
}
