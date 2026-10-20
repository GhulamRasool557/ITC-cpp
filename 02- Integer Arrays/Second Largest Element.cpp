#include <iostream>
using namespace std;

int main()
{
    int arr[5], largest = 0, second = 0;
    bool found = false;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    // Find largest
    largest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // Find largest among the numbers smaller than largest
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < largest)
        {
            if (!found || arr[i] > second)
            {
                second = arr[i];
                found = true;
            }
        }
    }

    if (found)
        cout << "Second largest = " << second << endl;
    else
        cout << "All numbers are equal, no second largest" << endl;

    return 0;
}
