#include <iostream>
using namespace std;
int maxprofit(int arr[], int n)
{
    int buy = INT16_MAX;
    int sell = INT16_MIN;
    int ind = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < buy)
        {
            buy = arr[i];
            ind = i;
        }
        for (int j = ind + 1; j < n; j++)
        {
            sell = max(arr[j], sell);
        }
    }
    if (ind == n-1)
        return 0;
    else
        return sell - buy;
}
int main()
{
    int n;
    cout << "Enter the Size of an Array = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max Profit = " << maxprofit(arr, n) << endl;
    return 0;
}