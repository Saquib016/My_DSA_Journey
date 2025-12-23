#include <iostream>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void extrareverse(int arr[], int n)
{
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[n - (i + 1)];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = brr[i];
    }
    cout << "Reverse with using Extra Array" << endl;
    printarr(arr, n);
}
void notextrareverse(int brr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = brr[i];
        brr[i] = brr[j];
        brr[j] = temp;
        i++;
        j--;
    }
    cout << endl
         << "Reverse Without using Extra Array " << endl;
    printarr(brr, n);
}
int main()
{
    int n;
    cout << "Enter the Size = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elementss= " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int brr[n];
    cout << "Enter the Elementss in 2nd Array = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    extrareverse(arr, n);
    notextrareverse(brr, n);
}
