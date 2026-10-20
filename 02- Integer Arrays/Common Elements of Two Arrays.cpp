#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5];
    bool anyCommon = false;

    cout << "Enter 5 numbers of first array: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter 5 numbers of second array: ";
    for (int i = 0; i < 5; i++)
        cin >> b[i];

    cout << "Common elements: ";
    for (int i = 0; i < 5; i++)
    {
        // Skip if this value already appeared earlier in a
        bool seenBefore = false;
        for (int k = 0; k < i; k++)
        {
            if (a[k] == a[i])
                seenBefore = true;
        }

        if (seenBefore)
            continue;

        for (int j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                anyCommon = true;
                break;
            }
        }
    }

    if (!anyCommon)
        cout << "None";
    cout << endl;

    return 0;
}
