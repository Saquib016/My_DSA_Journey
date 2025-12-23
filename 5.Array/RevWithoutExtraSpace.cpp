#include <iostream>
using namespace std;

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
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j]; 
        arr[j] = temp;
        i++;
        j--;
    }
    int k=0;
    cout<<"Reverse Array"<<endl;
while (k < n)
    {
        cout<<arr[k]<<endl;
        k++;
        
    }
    return 0;
}