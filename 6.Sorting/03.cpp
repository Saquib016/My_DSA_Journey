#include <iostream>
using namespace std;
void printarr(int *arr, int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "  ";
    }
}
int insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j;
        for ( j=i-1; j>=0 && arr[j]>temp; j--)
        {
            swap(arr[j],arr[j+1]); 

        }
        arr[j+1]=temp;
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

    insertionsort(arr, n);
    return 0;
}