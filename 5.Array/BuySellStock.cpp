#include <iostream>
#include <limits.h>
using namespace std;
int stock(int arr[], int n)
{
    int buy[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (min > arr[j])
                min = arr[j];
        }
        buy[i] = min;
    }
    int maxpr[n];
    for (int i = 0; i < n; i++)
    {
        maxpr[i] = arr[i] - buy[i];
    }

    cout << "The Max Profit In Each Day is written below Reaspectively : ";
    for (int i = 0; i < n; i++)
    {
        cout << maxpr[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < maxpr[i])
            max = maxpr[i];
    }

    return max;
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
    int st = stock(arr, n);
    cout << "\nThe Maximum Profit is " << st;
    return 0;
}
