#include <iostream>
using namespace std;

int main()
{
    int num = 0, original = 0, rev = 0;

    cout << "Input a number: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    if (original == rev)
        cout << original << " is Palindrome" << endl;
    else
        cout << original << " is Not Palindrome" << endl;

    return 0;
}