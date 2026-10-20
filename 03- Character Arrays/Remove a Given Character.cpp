#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char ch;
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to remove: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ch)
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    cout << "New string: " << str << endl;

    return 0;
}
