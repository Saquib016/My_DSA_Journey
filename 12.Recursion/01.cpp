#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    cout << "The Factorial of the Given number is = " << fact(n) << endl;
    return 0;
}
