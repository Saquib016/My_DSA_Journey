#include <iostream>
#include <vector>
using namespace std;
int ActivityS(vector<int> &st, vector<int> &end)
{
    //sort on the basis of end time (here already given so not to worry about it)
    int count = 1;
    int currEn = end[0];
    cout<<"selecting A0\n";
    for (int i = 1; i < st.size(); i++)
    {

        if (st[i] >= currEn)
        {
            cout<<"selecting A"<<i<<endl;
            count++;
            currEn = end[i];
        }
    }
    return count;
}
int main()
{
    // vector<int> start = {1, 3, 0, 5, 8, 5};
    // vector<int> end = {2, 4, 6, 7, 9, 9};      
    vector<int> start = {10,12,20};
    vector<int> end = {20,25,30};
    cout << ActivityS(start, end);
    return 0;
}