#include <iostream>
using namespace std;

int main()
{
    int arr[10], key = 0, count = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter number to count: ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
            count++;
    }

    cout << key << " occurs " << count << " times" << endl;

    return 0;
}
