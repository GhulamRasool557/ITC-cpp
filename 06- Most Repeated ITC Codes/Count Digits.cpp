#include <iostream>
using namespace std;

int main()
{
    int num = 0, count = 0;

    cout << "Input a number: ";
    cin >> num;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    cout << "The frequency of digits: " << count << endl;

    return 0;
}