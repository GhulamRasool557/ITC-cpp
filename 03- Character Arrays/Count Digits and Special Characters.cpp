#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int digits = 0, special = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z') ||
                   str[i] == ' '))
            special++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << special << endl;

    return 0;
}