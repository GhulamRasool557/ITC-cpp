#include <iostream>
using namespace std;

int main()
{
    int arr[10], evenSum = 0, oddSum = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << "Sum of even elements: " << evenSum << endl;
    cout << "Sum of odd elements: " << oddSum << endl;

    return 0;
}
