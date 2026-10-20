#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int start = 0, end = 0;
    char temp;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0;
    while (true)
    {
        // A word ends at a space or at the end of the string
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            // Swap characters of this word from both ends
            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    cout << "Result: " << str << endl;

    return 0;
}
