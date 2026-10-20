#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;
    char temp;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0')
        length++;

    // Bubble sort on characters
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "Sorted: " << str << endl;

    return 0;
}
