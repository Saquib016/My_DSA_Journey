#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}
int chainpair(vector<pair<int, int>> &ch, int n)
{
    int ans = 1;
    sort(ch.begin(), ch.end(), compare);
    int curr=ch[0].second;
    for (int i = 1; i < n; i++)
    {
        if(ch[i].first>=curr){
            ans++;
            curr=ch[i].second;
        }
    }
    
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Number of pairs = " << endl;
    cin >> n;
    vector<pair<int, int>> ch(n, make_pair(0, 0));
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        ch[i] = make_pair(x, y);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ch[i].first << "," << ch[i].second<<endl;
    // }

    cout<<chainpair(ch, n);
    return 0;
}