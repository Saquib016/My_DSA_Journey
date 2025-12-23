#include <iostream>
using namespace std;
bool prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    prime(n);
    if (prime(n) == 1)
        cout << prime;
    else
        cout << "Not Prime";
    return 0;
}