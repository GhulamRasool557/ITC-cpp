#include <iostream>
using namespace std;

int main()
{
    char first[100];
    char second[100];
    char joined[200];
    int i = 0, j = 0;

    cout << "Enter first string: ";
    cin.getline(first, 100);

    cout << "Enter second string: ";
    cin.getline(second, 100);

    // Copy first string
    while (first[i] != '\0')
    {
        joined[i] = first[i];
        i++;
    }

    // Add second string after it
    while (second[j] != '\0')
    {
        joined[i] = second[j];
        i++;
        j++;
    }
    joined[i] = '\0';

    cout << "Joined string: " << joined << endl;

    return 0;
}
