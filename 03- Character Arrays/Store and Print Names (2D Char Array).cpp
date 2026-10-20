#include <iostream>
using namespace std;

int main()
{
    char names[5][50];

    // Each row of the 2D array holds one name
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin.getline(names[i], 50);
    }

    cout << endl << "Names entered:" << endl;
    for (int i = 0; i < 5; i++)
        cout << i + 1 << ". " << names[i] << endl;

    return 0;
}
