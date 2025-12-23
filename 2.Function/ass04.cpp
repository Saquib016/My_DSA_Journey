#include <iostream>
#include <math.h>
using namespace std;
int largest(int a,int b,int c)
{
    if(a>b&&a>c) return a;
    else if(b>a&&b>c) return b;
    else  return c;
    
}
int main()
{
    int a;
    cout << "Enter 1st Number = " << endl;
    cin >> a;
    int b;
    cout << "Enter 2nd Number = " << endl;
    cin >> b;
    int c;
    cout << "Enter 3rd Number = " << endl;
    cin >> c;
    cout<<"The Largest among "<<a<<" "<<b<<" "<<c<<" is "<<largest(a,b,c)<<endl;
}
