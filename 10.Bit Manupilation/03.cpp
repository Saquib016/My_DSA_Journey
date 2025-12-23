#include <iostream>
#include <vector>
using namespace std;
void setIbit(int n, int i)
{
    int bitmask = 1 << i;
    cout << (n | bitmask) << endl;
}
int main()
{
    int n;
    cout << "Enter the number = " << endl;
    cin >> n;
    int i;
    cout << "Enter the position Index for bit" << endl;
    cin >> i;
    setIbit(n, i);
}