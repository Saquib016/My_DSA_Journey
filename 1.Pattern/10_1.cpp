#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        {
            for (int k = i; k < n; k++)
            {
                cout << "  ";
            }

            for(int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        /* code */
        {
            for (int l = 1; l <= n - i; l++)
            {
                cout << "  ";
            }
            for (int m = 1; m <= 2 * i - 1; m++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
