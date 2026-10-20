#include <iostream>
using namespace std;

int main()
{
    int num = 0, rev = 0;

    cout << "Input a number: ";
    cin >> num;

    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    cout << "After reverse: " << rev << endl;

    return 0;
}