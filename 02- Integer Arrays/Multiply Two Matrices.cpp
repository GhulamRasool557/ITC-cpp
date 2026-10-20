#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], result[3][3];

    cout << "Enter first matrix (3 x 3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    cout << "Enter second matrix (3 x 3): " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Row i of a times column j of b
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "Result matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
