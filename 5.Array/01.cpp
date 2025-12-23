#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size Of Array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of an Array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    cout<<"The Largest Element From this Array is = "<<max;
    return 0;
}