#include <iostream>
using namespace std;
int maxsumSubarr(int arr[], int n)
{
    int maxsum = INT16_MIN;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                if (maxsum < sum)
                    maxsum = sum;
            }
        }
    }
    return maxsum;
}
int twoloopmaxsumSubarr(int arr[], int n)
{
    int maxsum = INT16_MIN;
    for (int i = 0; i < n; i++)
    {

        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (maxsum < sum)
                maxsum = sum;
        }
    }
    return maxsum;
}
int kadanesAlgo(int arr[], int n)
{
    int maxsum = INT16_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
            currsum = 0;
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
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

    cout << "Max SubArray Sum = " << maxsumSubarr(arr, n) << endl;
    cout << "Max SubArray Sum = " << twoloopmaxsumSubarr(arr, n) << endl;
    cout << "Max SubArray Sum = " << kadanesAlgo(arr, n) << endl;
    return 0;
}