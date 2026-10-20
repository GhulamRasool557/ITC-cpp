#include <iostream>
using namespace std;

int main()
{
    int num = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Add all divisors smaller than the number
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num && num > 0)
        cout << num << " is a Perfect Number" << endl;
    else
        cout << num << " is Not a Perfect Number" << endl;

    return 0;
}
