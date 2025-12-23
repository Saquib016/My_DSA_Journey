#include <iostream>
using namespace std;
void decimaltobinary(int n){
   int i=0;
   int res=0;
   int rem;
   int pow=1;
    while (n>0)
    {
        rem=n%2;
        res=res+rem*pow;
        pow=pow*10;
       n= n/2;
       i++;
    }
    cout<<"The Binary Number is "<<res;
    
}
void powerbit(int num)
{
    if(((num)&(num-1))==0) cout<<"Power of 2"<<endl;
    else cout<<"Not the Power of 2"<<endl;
}

int main()
{
    int n;
    cout << "Enter the Number = ";
    cin >> n;
    powerbit(n);

    return 0;
}
