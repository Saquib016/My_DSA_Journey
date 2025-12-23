#include <iostream>
using namespace std;
void printarr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void changeArr(int arr[], int n, int i)
{
    if (i == n)
    {
        printarr(n, arr);
        return;
    }
    arr[i] = i + 1;
    changeArr(arr, n, i + 1);
    arr[i] -= 2;
}
int main()
{
    int n;
    cout << "Enter the Size of the Array = " << endl;
    cin >> n;
    int arr[n];
    changeArr(arr, n, 0);
    printarr(n,arr);
    return 0;
}
