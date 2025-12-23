#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        a = i;
        b = i;
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }

        for (int x = 1; x <= i; x++)
        {
            cout << a;
            a--;
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << b;
            b++;
        }

        cout << endl;
    }
}