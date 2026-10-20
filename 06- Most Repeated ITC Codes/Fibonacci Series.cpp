#include <iostream>
using namespace std;

int main()
{
    int n = 0, first = 0, second = 1, next = 0;

    cout << "How many terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}
