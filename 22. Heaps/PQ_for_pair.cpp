#include<iostream>
#include<queue>
using namespace std;
struct comparepair
{
    bool operator ()(pair<string,int>&p1,pair<string,int>&p2){
            return p1.second>p2.second;

    }
};

int main(){
    priority_queue<pair<string,int>,vector<pair<string,int>>,comparepair>pq;
    pq.push(make_pair("aman",50));
    pq.push(make_pair("bhumika",90));
    pq.push(make_pair("akbar",70));pq.push(make_pair("shubham",95));
    while (!pq.empty())
    {
        cout<<"TOP = "<<pq.top().first<<" , "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}