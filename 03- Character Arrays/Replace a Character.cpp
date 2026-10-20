#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char oldCh, newCh;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to replace: ";
    cin >> oldCh;

    cout << "Enter new character: ";
    cin >> newCh;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == oldCh)
            str[i] = newCh;
    }

    cout << "New string: " << str << endl;

    return 0;
}
