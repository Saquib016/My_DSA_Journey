#include <iostream>
using namespace std;
void printarr(int *arr, int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "  ";
    }
}
int bubblesort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool isswap = false;
        cout<<"Outer Loop"<<" ";
        for (int j = 0; j < n - i - 1; j++)
        {
            cout<<"Inner Loop"<<" ";
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
        cout<<endl;
        if(!isswap) break;
    }
    printarr(arr, n);
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

    bubblesort(arr, n);
    return 0;
}