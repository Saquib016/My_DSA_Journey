#include <iostream>
#include <vector>
using namespace std;
int islastoccur(vector<int> arr, int t, int i)
{
    if (i == arr.size())
        return -1;
    int found = islastoccur(arr, t, i + 1);
    if (found == -1 && arr[i] == t)
    {
        return i;
    }
    return found;
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    vector<int> arr(n, 0);
    cout << "Enter the Vector Element " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int t;
    cout << "Enter the Target Element = " << endl;
    cin >> t;
    cout << islastoccur(arr, t, 0);
    return 0;
}
