#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int ,string> m;
    m[101] = "Riya";
    m[102] = "Prem";
    m[103] = "Random";
    m[104] = "Prem";
    for(auto i:m){
        cout<<"key = "<<i.first<<" , Value = "<<i.second<<endl;
    }
    return 0;
}