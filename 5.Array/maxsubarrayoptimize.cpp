#include <iostream>
#include <limits.h>
using namespace std;
void maxsubarray(int arr[], int n)
{
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < i; j++)
        {
            sum += arr[j];
            maxsum = max(maxsum, sum);
        }
        cout<<"\n";
    }
    cout << maxsum << endl;
}
int main()
{
    int n;
    cout << "Enter the size Of Array = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Element of Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxsubarray(arr, n);
}