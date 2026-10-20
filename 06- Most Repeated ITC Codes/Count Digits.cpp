#include <iostream>
using namespace std;

int main()
{
    int num = 0, count = 0;

    cout << "Input a number: ";
    cin >> num;

    if (num < 0)
        num = -num;

    // do-while so that 0 is counted as 1 digit
    do
    {
        num /= 10;
        count++;
    } while (num != 0);

    cout << "The frequency of digits: " << count << endl;

    return 0;
}