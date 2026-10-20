#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to count: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    cout << ch << " occurs " << count << " times" << endl;

    return 0;
}
