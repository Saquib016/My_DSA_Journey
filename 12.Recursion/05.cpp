#include <iostream>
using namespace std;
bool issort(int n, int arr[],int i)
{
    if(i==n) return true;
    if(arr[i]>arr[i+1]) return false;
    return issort(n,arr,i+1);

}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i=0;
    cout << issort(n, arr,i);

    return 0;
}
