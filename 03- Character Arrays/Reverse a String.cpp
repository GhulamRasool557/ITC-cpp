#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char reversed[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Find length
    while (str[length] != '\0')
        length++;

    // Reverse string
    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - i - 1];
    }

    reversed[length] = '\0';

    cout << "Reversed string: " << reversed << endl;

    return 0;
}