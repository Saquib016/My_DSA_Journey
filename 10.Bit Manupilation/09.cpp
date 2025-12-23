#include <iostream>
#include <vector>
using namespace std;
int fastExpo(int x, int n)
{
    int ans = 1;
    while (n > 0)
    {
        int last = n & 1;
        if (last == 1)
            ans = ans * x;
        n = n >> 1;
        x = x * x;
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter the number = " << endl;
    cin >> x;
    int n;
    cout << "Enter the Exponent = " << endl;
    cin >> n;
    cout << fastExpo(x, n);
}