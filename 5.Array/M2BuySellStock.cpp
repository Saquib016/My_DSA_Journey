#include <iostream>
#include <limits.h>
using namespace std;
void stock(int arr[], int n)
{
    int buy[n];
    buy[0] = INT_MAX;
    cout << buy[0]<<" , ";
    for (int i = 0; i < n; i++)
    {
        buy[i] = min(buy[i - 1], arr[i]);
        cout << buy[i] << " , ";
    }
    cout << endl;
    int maxpr = 0;
    for (int i = 0; i < n; i++)
    {
        int currentprofit = arr[i] - buy[i];
        maxpr = max(maxpr, currentprofit);
    }
    cout << "max profit  " << maxpr<< endl;
}
int main()
{
    int n;
    cout << "Enter the Size = ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of an Array = " << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stock(arr, n);

    return 0;
}
