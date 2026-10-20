#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    long fact = 1;

    cout << "Input a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial of a negative number does not exist" << endl;
        return 0;
    }

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout << "Factorial of " << num << " is " << fact << endl;

    return 0;
}