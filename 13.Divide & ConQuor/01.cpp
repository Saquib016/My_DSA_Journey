#include <iostream>
#include <vector>
using namespace std;
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
void merge(int arr[], int s, int e, int mid)//O(n)
{
    vector<int> temp;
    int i = s;
    int j = mid + 1;
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i<=mid) {
        temp.push_back(arr[i++]); //coz some elements left if any one exeecds the limit
    }
    while (j<=e) {
        temp.push_back(arr[j++]); //coz some elements left if any one exeecds the limit
    }
    for (int i = s,x=0 ;i <= e; i++)
    {
        arr[i] = temp[x++];
    }
}
void mergeSo(int arr[], int s, int e)//O(logn)
{
    int mid = (s + e) / 2; //Divide
    if (s >= e)
        return;
    mergeSo(arr, s, mid);
    mergeSo(arr, mid + 1, e); 
    merge(arr, s, e, mid); //conquer //to merge all sorted element
}
int main()
{
    int n;
    cout << "Enter the Size of the Array = " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSo(arr, 0, n - 1);
    printarr(arr,n);
    return 0;
}
