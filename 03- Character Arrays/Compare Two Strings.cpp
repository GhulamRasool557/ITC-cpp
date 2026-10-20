#include <iostream>
using namespace std;

int main()
{
    char first[100];
    char second[100];
    int i = 0;
    bool same = true;

    cout << "Enter first string: ";
    cin.getline(first, 100);

    cout << "Enter second string: ";
    cin.getline(second, 100);

    // Stop when either string ends
    while (first[i] != '\0' && second[i] != '\0')
    {
        if (first[i] != second[i])
        {
            same = false;
            break;
        }
        i++;
    }

    // Both must end at the same place
    if (first[i] != second[i])
        same = false;

    if (same)
        cout << "Both strings are Same" << endl;
    else
        cout << "Strings are Different" << endl;

    return 0;
}
