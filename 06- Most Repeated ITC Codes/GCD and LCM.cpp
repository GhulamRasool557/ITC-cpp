#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, x = 0, y = 0, temp = 0;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    // Euclid's method: keep taking remainders
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    cout << "GCD = " << x << endl;
    cout << "LCM = " << (a / x) * b << endl;

    return 0;
}
