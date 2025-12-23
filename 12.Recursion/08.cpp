#include <iostream>
#include <math.h>
using namespace std;
int power(int x, int n)  //O(logn n)
{

    if (n == 0)
    {
        return 1;
    }
    if (n % 2 != 0)
    {
        return x * power(x, n / 2) * power(x, n / 2);
    }
    return power(x, n / 2) * power(x, n / 2);
}
int main()
{
    int x;
    cout << "Enter the Base = " << endl;
    cin >> x;
    int n;
    cout << "Enter The Power = " << endl;
    cin >> n;
    cout << power(x, n);
    return 0;
}
