#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int words = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        // A word starts where a non-space comes after a space (or at the start)
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;
    }

    cout << "Number of words: " << words << endl;

    return 0;
}
