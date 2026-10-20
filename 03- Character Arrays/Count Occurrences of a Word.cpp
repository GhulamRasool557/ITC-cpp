#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char word[50];
    int count = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    cout << "Enter word to count: ";
    cin.getline(word, 50);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;

        while (word[j] != '\0' && str[i + j] == word[j])
            j++;

        if (word[j] == '\0' && j > 0)
            count++;
    }

    cout << "Word occurs " << count << " times" << endl;

    return 0;
}
