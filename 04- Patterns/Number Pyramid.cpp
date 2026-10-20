/*

Structure: Number Pyramid
Input: 5

        1 
       2 2 
      3 3 3 
     4 4 4 4 
    5 5 5 5 5

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
