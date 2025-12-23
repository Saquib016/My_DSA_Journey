#include <iostream>
using namespace std;
int binsearch(int *arr,int n,int k){
    int st=0;
    int end=n-1;
    int mid = (st+end)/2;
    while (st<=end)
    {
        /* code */
        if(arr[mid]==k) {
            return mid;
        }
        else if(arr[mid]>k) end=mid-1;
        else st=mid+1;
        st++;
        end--;
    }
    return -1;
    
}
int main()
{
    int n;
    cout << "Enter the Size = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elementss= " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout<<"Enter the Number to be Searched = "<<endl;
    cin>>k; 
    cout<<binsearch(arr,n,k)<<endl;

}