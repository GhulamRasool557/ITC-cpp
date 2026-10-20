#include <iostream>
using namespace std;

int main()
{
    char first[100];
    char second[100];
    int freq1[26] = {0}, freq2[26] = {0};
    bool anagram = true;

    cout << "Enter first word: ";
    cin.getline(first, 100);

    cout << "Enter second word: ";
    cin.getline(second, 100);

    // Count letters of both words (small letters only)
    for (int i = 0; first[i] != '\0'; i++)
    {
        if (first[i] >= 'a' && first[i] <= 'z')
            freq1[first[i] - 'a']++;
    }

    for (int i = 0; second[i] != '\0'; i++)
    {
        if (second[i] >= 'a' && second[i] <= 'z')
            freq2[second[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Words are Anagrams" << endl;
    else
        cout << "Words are Not Anagrams" << endl;

    return 0;
}
