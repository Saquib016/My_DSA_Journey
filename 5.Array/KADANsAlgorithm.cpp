#include <iostream>
#include <limits.h>
using namespace std;
void kadan(int *arr, int n)
{
    int maxsum = INT_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        maxsum=max(maxsum,sum);
        if (sum<0)
        {
            sum=0;
        }
        
    }
    cout <<"The Maximum Value is = "<< maxsum;
    return;
}
int main()
{
    int n;
    cout << "Enter the size = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Matrix " << endl; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    kadan(arr, n);
    return 0;
}
