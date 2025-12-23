#include <iostream>
#include <math.h>
using namespace std;
int sum(int n)
{
    int sum=0;
    while (n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
    
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    cout<<sum(n)<<endl;
}
