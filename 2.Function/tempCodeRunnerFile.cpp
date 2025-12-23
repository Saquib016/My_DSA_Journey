#include<iostream>
using namespace std;
bool prime(int n){
    if(n==2) return true;
    for (int i = 2; i < n; i++)
    {
         if(n%i==0 && n!=2) return false;
        else return true;
    }
    
}
int main(){
    int n;
    cout<<"Enter the Number = "<<endl;
    cin>>n;
    prime(n);
    // if(prime(n)==1) cout<<prime;
    // else cout<<"Not Prime";
    return 0;
}