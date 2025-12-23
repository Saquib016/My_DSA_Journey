#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int b = 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}