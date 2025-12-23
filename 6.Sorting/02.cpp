#include <iostream>
using namespace std;
void printarr(int *arr, int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "  ";
    }
}
int selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minidx=i;
        //Loop to Find Min Index
        for (int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minidx]) minidx=j;
            
        }
        
        swap(arr[i],arr[minidx]);
    }

    printarr(arr, n);
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

    selectionsort(arr, n);
    return 0;
}