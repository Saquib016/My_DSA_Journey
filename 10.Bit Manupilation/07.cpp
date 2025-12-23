#include <iostream>
#include <vector>
using namespace std;
int clearIbits(int n, int i)
{
    int mask = (~0) << i;
    return n & mask;
}
int main()
{
    int n;
    cout << "Enter the number = " << endl;
    cin >> n;
    int i;
    cout << "Enter the Number of Bits to be Cleared = " << endl;
    cin >> i;
    cout << clearIbits(n, i);
}