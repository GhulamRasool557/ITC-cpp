#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char ch;
    int position = -1;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to search: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << ch << " found at index " << position << endl;
    else
        cout << ch << " not found" << endl;

    return 0;
}
