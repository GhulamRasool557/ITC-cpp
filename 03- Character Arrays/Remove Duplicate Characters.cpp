#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        bool seen = false;

        // Check if this character is already kept
        for (int k = 0; k < j; k++)
        {
            if (str[k] == str[i])
            {
                seen = true;
                break;
            }
        }

        if (!seen)
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    cout << "Result: " << str << endl;

    return 0;
}
