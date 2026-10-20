#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char word[50];
    int position = -1;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    cout << "Enter word to find: ";
    cin.getline(word, 50);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;

        // Match word starting at index i
        while (word[j] != '\0' && str[i + j] == word[j])
            j++;

        if (word[j] == '\0' && j > 0)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Word found at index " << position << endl;
    else
        cout << "Word not found" << endl;

    return 0;
}
