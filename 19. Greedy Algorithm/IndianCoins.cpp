#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare (int a,int b){
    return a<b;
}
int IndianCoins(vector<int>coins,int V){
    int ans=0;
    sort(coins.begin(),coins.end(),compare);
    for (int i = coins.size()-1; i >= 0&&V>0;i--)
    {
        if(V>=coins[i]){
            ans+=(V/coins[i]);
            V=V%coins[i];
        }
    }
    
    cout<<"Minimum Number Of Coins Used = "<<ans;
    
    return ans;
}
int main(){
    vector<int> coins = {1,2,5,10,20,50,100,500,2000};
    int V;
    cout<<"Enter the Value = ";
    cin>>V;
    IndianCoins(coins,V);
    return 0;
}