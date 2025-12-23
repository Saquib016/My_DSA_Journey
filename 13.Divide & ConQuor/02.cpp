#include<iostream>
using namespace std;

int partition(int arr[],int s, int e){
    int i=s-1;
    int P=arr[e];
    for (int j = s; j < e; j++)
    {
        if(arr[j]<=P){
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
    
}
void quick(int arr[],int s,int e){
    if(s>=e) return;
    int pi=partition(arr,s,e);
    quick(arr,s,pi-1);
    quick(arr,pi+1,e);
}
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
int main() {
int n;
cout<<"Enter the Number = "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the Elements"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
quick(arr,0,n-1);
printarr(arr,n);
return 0;
}
