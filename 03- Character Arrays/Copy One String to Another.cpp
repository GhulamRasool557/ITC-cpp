#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char copy[100];
    int i = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';

    cout << "Copied string: " << copy << endl;

    return 0;
}
