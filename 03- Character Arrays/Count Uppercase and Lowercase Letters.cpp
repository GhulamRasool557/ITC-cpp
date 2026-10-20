#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int upper = 0, lower = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }

    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;

    return 0;
}
