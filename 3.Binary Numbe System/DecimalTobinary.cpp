#include<iostream>
#include<math.h>
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
int main() {
int n;
cout<<"Enter the Decimal Number = ";
cin>>n;
decimaltobinary(n);
 
return 0;
}
