#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++)
    {
        int count = 1;

        if (arr[i] == -1)
            continue;

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}