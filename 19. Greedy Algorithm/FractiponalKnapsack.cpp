#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<double, int> p1, pair<double, int> p2)
{
    return p1.first > p2.first;
}
int knapsack(vector<int> val, vector<int> wt, int &W)
{
    int n=val.size();
    vector<pair<double, int>> p1(n, make_pair(0.0, 0));
    int i;
    for (i = 0; i < n; i++)
    {
        double r= (val[i] / (double)wt[i]);
        p1[i] = make_pair(r, i);
    }
    sort(p1.begin(), p1.end(), compare);
    int ans = 0;
    for (int j = 0; j < n; j++)
    {

        int idx = p1[j].second;
        if (wt[idx] <= W)
        {
            ans += val[idx];
            W -= wt[idx];
        }
        else
        {
            ans += (p1[j].first * W);
            W = 0;
            break;
        }
    }
    cout << "maximum val = " << ans << endl;
    return ans;
}
int main()
{
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;
    knapsack(val, wt, W);
    return 0;
}