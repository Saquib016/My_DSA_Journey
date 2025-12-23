#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Your Number = " << endl;
    cin >> n;
    int x;
    cout << "Enter 1 if Square yard to Square ft 2 if Square ft to square yard =  " << endl;
    cin >> x;
    if (x == 1)
    {
        float z = 8.91 * n;
        cout << "Square yard to Square feet = " << z << endl;
    }
    else if (x == 2)
    {
        float z = n / 8.91;
        cout << "Square feet to Square yard = " << z << endl;
    }
    return 0;
}<