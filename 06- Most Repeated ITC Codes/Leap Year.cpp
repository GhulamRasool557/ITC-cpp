#include <iostream>
using namespace std;

int main()
{
    int year = 0;

    cout << "Enter a year: ";
    cin >> year;

    // Divisible by 400, or divisible by 4 but not by 100
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << year << " is a Leap Year" << endl;
    else
        cout << year << " is Not a Leap Year" << endl;

    return 0;
}
