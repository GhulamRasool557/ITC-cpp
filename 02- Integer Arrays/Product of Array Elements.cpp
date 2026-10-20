#include <iostream>
using namespace std;

int main()
{
    int arr[5], product = 1;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 5; i++)
        product *= arr[i];

    cout << "Product = " << product << endl;

    return 0;
}
