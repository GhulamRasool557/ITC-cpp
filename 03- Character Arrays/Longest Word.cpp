#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0, maxLength = 0, maxStart = 0, start = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;
        }
        else
        {
            length++;
        }

        if (str[i] == '\0')
            break;
    }

    cout << "Longest word: ";
    for (int i = maxStart; i < maxStart + maxLength; i++)
        cout << str[i];
    cout << " (" << maxLength << " letters)" << endl;

    return 0;
}
