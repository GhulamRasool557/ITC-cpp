#include <iostream>
using namespace std;

int main()
{
    int num = 0, original = 0, temp = 0, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count digits
    temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    // Add each digit raised to the power of digits
    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        int power = 1;

        for (int i = 1; i <= digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong Number" << endl;
    else
        cout << original << " is Not an Armstrong Number" << endl;

    return 0;
}
