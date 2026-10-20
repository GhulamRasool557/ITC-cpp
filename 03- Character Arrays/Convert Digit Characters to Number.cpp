#include <iostream>
using namespace std;

int main()
{
    char str[20];
    int number = 0;
    bool valid = true;

    cout << "Enter digits: ";
    cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            // '7' - '0' gives 7
            number = number * 10 + (str[i] - '0');
        }
        else
        {
            valid = false;
            break;
        }
    }

    if (valid)
    {
        cout << "Number = " << number << endl;
        cout << "Number + 1 = " << number + 1 << endl;
    }
    else
    {
        cout << "Invalid input! Enter digits only." << endl;
    }

    return 0;
}
