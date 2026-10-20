#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int sentences = 0;

    cout << "Enter a paragraph: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!')
            sentences++;
    }

    cout << "Number of sentences: " << sentences << endl;

    return 0;
}
