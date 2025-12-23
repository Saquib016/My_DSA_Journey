#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second > p2.second;
}
void maxprofit(vector<int> &dur, vector<int> &profit)
{
    int n = dur.size();
    vector<pair<int, int>> p(n, make_pair(0, 0));
    for (int i = 0; i < n; i++)
    {
        p[i] = make_pair(dur[i], profit[i]);
    }
    sort(p.begin(), p.end(), compare);
    vector<int> job;
    int safe = 2;
    int ans = p[0].second;
    cout<<"Job 1"<<endl;
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i].first >= safe)
        {
            cout<<"Job "<<i<<" "; 
            ans += p[i].second;
            safe++;
        }
        
    }
    cout<<"\nMaximum Profit = "<<ans;
    return;
}
int main()
{
    vector<int> dur = {4, 1, 1, 1};   
    vector<int> profit = {20, 10, 40, 30};
    maxprofit(dur, profit);
    return 0;
}