#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int absoluteDiff(vector<int> &A, vector<int> &B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int diff = 0;
    vector<pair<int, int>> p(3, make_pair(0, 0));
    for (int i = 0; i < A.size(); i++)
    {
        p[i] = make_pair(A[i], B[i]);
        if(p[i].first>p[i].second) diff+=(p[i].first-p[i].second);
        else diff+=(p[i].second-p[i].first);
    }
    cout<<"Absolute Difference = "<<diff;
    return diff;
}
int main()
{
    // vector<int> A = {4, 1, 8, 7};
    // vector<int> B = {2, 3, 6, 5};
    vector<int> A = {2,1,3};
    vector<int> B = {1,2,3};
    
    absoluteDiff(A, B);
    return 0;
}