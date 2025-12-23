#include <iostream>
#include <vector>
using namespace std;
bool getIbit(int n, int i)
{
    int bitmask = 1 << i;
    if ((n & bitmask )> 0)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cout << "Enter the number = " << endl;
    cin >> n;
    int i;
    cout << "Enter the position Index for bit" << endl;
    cin >> i;
    cout << getIbit(n, i);
}