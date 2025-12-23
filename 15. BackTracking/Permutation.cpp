#include<iostream>
#include<string>
using namespace std;
void permutation(string str,string ans){
    if(str.size()==0) {
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        int n=str.size();
        char ch = str[i];
        permutation(str.substr(0,i)+str.substr(i+1,n-i-1),ans+str[i]);

    }
    
}
int main(){
    string str;
    cout<<"Enter the String = "<<endl;
    cin>>str;
    string ans="";
    cout<<"All Permutation of the Given Sting = "<<endl;
    permutation(str,ans);
}