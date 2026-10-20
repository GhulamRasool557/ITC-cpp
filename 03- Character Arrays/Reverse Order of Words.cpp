#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0')
        length++;

    cout << "Result: ";

    int end = length - 1;
    for (int i = length - 1; i >= -1; i--)
    {
        // Print a word when we reach a space or the beginning
        if (i == -1 || str[i] == ' ')
        {
            for (int j = i + 1; j <= end; j++)
                cout << str[j];

            if (i != -1)
                cout << " ";

            end = i - 1;
        }
    }
    cout << endl;

    return 0;
}
