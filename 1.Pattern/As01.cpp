#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        
        int a = b;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a = 1 - a;
        }
        b=1-b;

        cout << endl;
    }
}