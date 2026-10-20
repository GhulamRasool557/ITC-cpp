#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int freq[26] = {0};
    int maxIndex = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            freq[str[i] - 'A']++;
    }

    for (int i = 1; i < 26; i++)
    {
        if (freq[i] > freq[maxIndex])
            maxIndex = i;
    }

    if (freq[maxIndex] == 0)
        cout << "No letters found" << endl;
    else
        cout << "Most frequent: " << (char)('a' + maxIndex)
             << " (" << freq[maxIndex] << " times)" << endl;

    return 0;
}
