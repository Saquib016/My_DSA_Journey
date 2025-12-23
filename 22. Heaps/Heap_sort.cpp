#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void heapify(int i, vector<int> &arr, int n)
{

    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int maxid = i;
    if (i > n)
        return;
    if (l < n && arr[l] > arr[maxid])
        maxid = l;
    if (r < n && arr[r] > arr[maxid])
        maxid = r;
    swap(arr[maxid], arr[i]);
    if (maxid != i)
    { // i.e swap with child
        heapify(maxid, arr, n);
    }
}
void heapSort(vector<int> &arr)
{
    int n = arr.size();
    //Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    { 
        heapify(i, arr, n);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(0,arr,i);
    }
    return;
}
int main()
{
    vector<int> arr = {1, 4, 2, 5, 3};
    heapSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}