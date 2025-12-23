#include <iostream>
using namespace std;

int primes(int n)
{
    int i;
    for (i = 2; i <= n; i++)
    {
        int x = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                x = 1;
                break;
            }
        }
        if (x == 0)
        cout << i << " ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout << "Enter the End Of Prime = " << endl;
    cin >> n;
    primes(n);
}
