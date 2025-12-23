#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
cout<<"Enter the Binary Number";
cin>>n;
int sum = 0;
for(int i=0;n>0;i++){
   int l=n%10;
    n=n/10;
    sum=sum+pow(2,i)*l;
}
cout<<"The Decimal Number From Binary is = "<<sum;

 
return 0;
}
