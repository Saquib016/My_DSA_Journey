#include<iostream>
using namespace std;
int main(){
    int n=7;
    char a='A';
    if(a<=90){
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<a<<" ";
            a++;

        }
        cout<<endl;
    }}
    else{
        cout<<"Exceeed the Value ";
    }
    
}