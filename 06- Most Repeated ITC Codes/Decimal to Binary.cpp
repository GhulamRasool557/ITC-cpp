#include <iostream>
using namespace std;

int main()
{
    int num = 0, binary[32], count = 0;

    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Binary: 0" << endl;
        return 0;
    }

    // Store remainders
    while (num > 0)
    {
        binary[count] = num % 2;
        num /= 2;
        count++;
    }

    // Print remainders in reverse
    cout << "Binary: ";
    for (int i = count - 1; i >= 0; i--)
        cout << binary[i];
    cout << endl;

    return 0;
}
