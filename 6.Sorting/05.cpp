#include <iostream>
#include<algorithm>
using namespace std;
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

    sort(arr, arr+n); //sort(arr+2,arr+5) if want to sort a part of it
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}