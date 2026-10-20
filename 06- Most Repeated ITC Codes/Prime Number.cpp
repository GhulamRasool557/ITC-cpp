#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2)
        prime = false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << num << " is Prime" << endl;
    else
        cout << num << " is Not Prime" << endl;

    return 0;
}
