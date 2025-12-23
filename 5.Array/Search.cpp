#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[], int n, int key)
{
    int st = 0;
    int end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)

            st = mid + 1;

        else

            end = mid - 1;
    }
    return -1;
}
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
    int key;
    cout << "Enter the Number Need to be Found = ";
    cin >> key;
    cout << "By Linear Search = " << linearsearch(arr, n, key) << endl;
    cout << "By Binary Search = " << binarysearch(arr, n, key) << endl;

    return 0;
}