#include <iostream>
#include <math.h>
using namespace std;
int square(int a,int b)
{
    return (a*a+b*b+2*a*b);
    
}
int main()
{
    int a;
    cout << "Enter 1st Number = " << endl;
    cin >> a;
    int b;
    cout << "Enter 2nd Number = " << endl;
    cin >> b;
    cout<<"("<<a<<"+"<<b<<")"<<"^2"<<" is "<<square(a,b)<<endl;
}
