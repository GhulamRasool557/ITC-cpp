#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int key = 0;

    cout << "Enter message: ";
    cin.getline(str, 100);

    cout << "Enter key (1 to 25): ";
    cin >> key;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'a' + (str[i] - 'a' + key) % 26;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'A' + (str[i] - 'A' + key) % 26;
    }

    cout << "Encrypted: " << str << endl;

    return 0;
}
