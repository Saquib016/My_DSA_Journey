#include <iostream>
using namespace std;
void subarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j ++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout <<",";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout << "Enter the Size of an Array = " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subarray(arr, n);
    return 0;
}