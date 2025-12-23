#include <iostream>
using namespace std;
int dublicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
    
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]) return true;
        } 
        
    }
    return false;
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

    cout << "If 1 Then Dublicate If 0 then Distint " <<endl<< dublicate(arr, n) << endl;
    return 0;
}