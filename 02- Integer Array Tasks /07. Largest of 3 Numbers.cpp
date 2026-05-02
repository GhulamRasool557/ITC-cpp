#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

    cout << "Input three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << a << " is the Largest number" << endl;
    else if (b >= a && b >= c)
        cout << b << " is the Largest number" << endl;
    else
        cout << c << " is the Largest number" << endl;

    return 0;
}