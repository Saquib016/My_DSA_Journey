#include<iostream>
using namespace std;
int prd(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"Enter the first number = "<<endl;
    cin>>a;
    cout<<"Enter the second Number = "<<endl;
    cin>>b;
    cout<<"Product of a & b = "<<prd(a,b);
    return 0;
}