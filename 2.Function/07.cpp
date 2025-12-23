#include <iostream>
using namespace std;
int isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int primes(int n)
{
    
    for (int i = 2; i <= n; i++)
    {
        if(isprime(i)) cout<<i<<" ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the End Of Prime = " << endl;
    cin >> n;
    primes(n);
}
