#include <iostream>
using namespace std;
void rot(int arr[], int n,int k)
{
    int i=0;
    int j=k;
    while(j<n){
        swap(arr[i],arr[j]);
        i++;
        j++;
    }
    while (i<n)
    {
        swap(arr[i],arr[i+1]);
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<j-k;
    
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
    int k;
    cout << "Rarget = " << endl;
    cin >> k;

    cout << "Rotation =  " << endl << rot(arr, n,k) << endl;
    return 0;
}