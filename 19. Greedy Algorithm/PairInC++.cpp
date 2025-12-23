#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int> p2){
    return p1.second<p2.second; //ascending -- according to the end time
    // return p1.second>p2.second; //descending -- according to the end time
    // return p1.first<p2.first; //ascending -- according to the start time
    // return p1.first>p2.first; //descending -- according to the start time
}
int main()
{
    vector<int> start = {0, 1, 3};
    vector<int> end = {9, 2, 4};
    // -------------------------------------------------------------------
    vector<pair < int, int>> act(3, make_pair(0, 0));

    for(int i=0;i<start.size();i++){
        act[i]=make_pair(start[i],end[i]);
    }
    for (int i = 0; i < start.size(); i++)
    {
        cout<<"A"<<i<<" "<<act[i].first<<","<<act[i].second<<endl;
    }
    // ------------------------------------------------------------------
    sort(act.begin(),act.end(),compare);
    cout<<"Sorted -  -- - - - - -  -"<<endl;
    for (int i = 0; i < start.size(); i++)
    {
        cout<<"A"<<i<<" "<<act[i].first<<","<<act[i].second<<endl;
    }
    return 0;
}