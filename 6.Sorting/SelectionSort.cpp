#include <iostream>
using namespace std;

void selectionsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < arr[minidx])
                minidx = j;
        }
        swap(arr[i], arr[minidx]);
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
    selectionsort(arr, n);
    return 0;
}
