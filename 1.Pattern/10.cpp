#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n; i++)
    {
    
            for (int k = i; k < n; k++)
            {
                cout << "  ";
            }

            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "* ";
            }
        cout<<"\n";
    }
    for (int i = n; i >= 1; i--)
    {
        for (int l = 1; l <= i - (n + 1); l++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= 2 * (2 * n - i) + 1; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}