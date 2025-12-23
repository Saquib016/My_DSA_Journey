#include <iostream>
using namespace std;

void insertionsort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        /* code */

        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the Size of Array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr, n);
    return 0;
}
