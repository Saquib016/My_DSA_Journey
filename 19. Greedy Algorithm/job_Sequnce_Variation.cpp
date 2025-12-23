#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Jobs{
 public:
 int idx;
 int deadline;
 int profit;
 Jobs(int idx,int deadline ,int profit){
    this->idx=idx;
    this->profit = profit;
    this->deadline=deadline;
 }
};
int maxprofit(vector<int> &dur, vector<int> &profit){
    int n=dur.size();
    vector<Jobs> jobs;
    vector<pair<int ,int> >pairs(n,make_pair(0,0));
    for (int i = 0; i < n; i++)
    {
        pairs[i]=make_pair(dur[i],profit[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        jobs.emplace_back(i,pairs[i].first,pairs[i].second); // sabko job waali class ke hisaab se daal dia..
    }
     sort(jobs.begin(),jobs.end(),[](Jobs &a,Jobs& b){
        return a.profit>b.profit;
     });
     cout<<"Job "<<jobs[0].idx<<endl;
     int ans=jobs[0].profit;
     int safe=2;
     for (int i = 1; i < jobs.size(); i++)
    {
        if (jobs[i].deadline >= safe)
        {
            cout<<"Job "<<jobs[i].idx<<endl;
            ans += jobs[i].profit;
            safe++;
        }
        
    }
    cout<<"Profit = "<<ans<<endl;
    return ans;
}
int main(){
     vector<int> dur = {4, 1, 1, 1};   
    vector<int> profit = {20, 10, 40, 30};
    maxprofit(dur, profit);
    return 0;
}