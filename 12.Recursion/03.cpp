#include<iostream>
using namespace std;
int sum(int n){
    int s=0;
    if(n==1) return 1;
    return n+sum(n-1);
}
int main() {
int n;
cout<<"Enter the Number  = "<<endl;
cin>>n;
cout<<"The Sum of Natural Number is = "<<sum(n);
return 0;
}
