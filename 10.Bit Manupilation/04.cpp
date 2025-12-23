#include <iostream>
#include <vector>
using namespace std;
int clearIbit(int n, int i)
{
    int bitwise = ~(1<<i);
    return (n&bitwise);
}
int main()
{
    int n;
    cout << "Enter the number = " << endl;
    cin >> n;
    int i;
    cout << "Enter the position Index for bit" << endl;
    cin >> i;
    cout<<clearIbit(n, i); 
}