#include <iostream>
using namespace std;
void subarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout<<arr[i]<<","<<arr[j]<<" "; //start and end pairs
            for (int k = i; k <= j; k++)
            {
                cout << arr[k]<<"  ";
            }
            cout << ", ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the Size ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subarray(arr, n);
    return 0;
}