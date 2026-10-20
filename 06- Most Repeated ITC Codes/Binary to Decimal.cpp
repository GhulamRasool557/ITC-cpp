#include <iostream>
using namespace std;

int main()
{
    long long binary = 0;
    int decimal = 0, base = 1, digit = 0;
    bool valid = true;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0)
    {
        digit = binary % 10;

        if (digit != 0 && digit != 1)
        {
            valid = false;
            break;
        }

        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    if (valid)
        cout << "Decimal: " << decimal << endl;
    else
        cout << "Invalid binary number!" << endl;

    return 0;
}
