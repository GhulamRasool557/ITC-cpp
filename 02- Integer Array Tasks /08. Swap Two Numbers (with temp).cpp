#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Input two numbers: ";
    cin >> a >> b;

    cout << "-----------------------" << endl;
    cout << "Before Swapping" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swapping" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}