#include <iostream>
#include <vector>
using namespace std;
int  isoccur(vector<int> vec, int i, int t)
{
    if (i == (vec.size()))
        return -1;
    if (vec[i] == t)
        return i;
    return isoccur(vec, i + 1, t);
}
int main()
{
    vector<int> vec(5, 0);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    int t;
    cout << "Enter the Number to be found " << endl;
    cin >> t;
    int i = 0;
    cout << isoccur(vec, i, t);
    return 0;
}
 