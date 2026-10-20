#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        bool wordStart = (i == 0 || str[i - 1] == ' ');

        if (wordStart && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (!wordStart && str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    cout << "Result: " << str << endl;

    return 0;
}
