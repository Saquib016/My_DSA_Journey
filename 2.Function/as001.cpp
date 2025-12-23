#include <iostream>
#include <math.h>
using namespace std;
int palin(int n)
{
    int reverse=0,original=n;
    while (n>0)
    {
        reverse=reverse*10+(n%10);
        n=n/10;
    }
    return reverse==original;
    
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    if(palin(n)) cout<<n<<" is a Palindrome "<<endl;
    else cout<<n<<" is not a Palindrome "<<endl;
}
