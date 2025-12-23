#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1 = {2, 7, 11, 15};
    vector<int> ans;
    int target = 9;
    int st = 0;
    int end = vec1.size() - 1;
    while (st < end)
    {
        int pairsum = vec1[st] + vec1[end];
        if (pairsum == target)

        {
            ans.push_back(st);
            ans.push_back(end);
            cout<<ans[0]<<","<<ans[1];
            break;
        }
        else if (pairsum > target)
            end--;
        else
            st++;
    }

    return 0;
}
