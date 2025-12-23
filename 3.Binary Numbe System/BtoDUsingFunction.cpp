#include<iostream>
#include<math.h>
using namespace std;
void binarytodecimal(int n){
    int binary=n;
    int l;
    int sum=0;
    for (int i = 0; n>0; i++)
    {
        l=n%10;
        n=n/10;
        sum=sum+pow(2,i)*l;
    }
    cout<<sum<<" is the Decimal Number from the Binary "<<binary;
    
}
int main() {
    int n;
    cout<<"ENter the Binary Number = ";
    cin>>n;
binarytodecimal(n);
 
return 0;
}
