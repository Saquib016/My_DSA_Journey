// nth fibonacci Series
#include <iostream>
using namespace std;
int nthterm(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return nthterm(n - 1) + nthterm(n - 2);
}
int main()
{
    int n;
    cout << "Enter the term = " << endl;
    cin >> n;
    cout << nthterm(n) << endl;
    return 0;
}
