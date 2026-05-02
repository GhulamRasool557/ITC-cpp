#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Input a number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}