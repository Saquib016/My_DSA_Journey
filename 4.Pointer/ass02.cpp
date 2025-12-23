#include <iostream>
#include <math.h>
using namespace std;
void multiply(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{
    int x = 1, y = 2, z = 3;
    multiply(x, y, z);
    cout << x << y << z;
    return 0;
}