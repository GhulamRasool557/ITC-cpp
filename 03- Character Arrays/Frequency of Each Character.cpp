#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int freq[26] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // freq[0] counts 'a', freq[1] counts 'b' ... (capitals counted as small)
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            freq[str[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            cout << (char)('a' + i) << " = " << freq[i] << endl;
    }

    return 0;
}
