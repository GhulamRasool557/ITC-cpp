#include <iostream>
using namespace std;

int main()
{
    int start = 0, end = 0;

    cout << "Enter start: ";
    cin >> start;

    cout << "Enter end: ";
    cin >> end;

    cout << "Prime numbers: ";
    for (int num = start; num <= end; num++)
    {
        bool prime = true;

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
            cout << num << " ";
    }
    cout << endl;

    return 0;
}
