#include <iostream>
using namespace std;
int linear(int arr[], int n,int k)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k) return i;
    }
    return -1;
}
int main()
{
    int n;
     cout << "Enter the Size = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elementss= "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the number need to be Searched = " << endl;
    cin >> k;
    if(linear(arr, n,k)==-1) cout<<"Number is not Present In Array"<<endl;
    else cout<<"The Index of the Searched Number is = "<<linear(arr, n,k);
}

