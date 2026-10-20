#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    bool counted[10] = {false};

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++)
    {
        int count = 1;

        // Skip numbers already counted
        if (counted[i])
            continue;

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                counted[j] = true;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}