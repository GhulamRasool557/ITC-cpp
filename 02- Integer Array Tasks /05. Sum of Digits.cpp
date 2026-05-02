#include <iostream>
using namespace std;

int main()
{
    int num = 0, sum = 0;

    cout << "Input a number: ";
    cin >> num;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    cout << "The sum of digits: " << sum << endl;

    return 0;
}