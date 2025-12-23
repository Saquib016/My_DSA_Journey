#include <iostream>
#include <limits.h>
using namespace std;
int storedwater(int *arr, int n)
{
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    rmax[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i - 1]);
    }
    for (int i = 1; i < n; i++)
    {
        cout << lmax[i] << "\n";
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << rmax[i] << ",";
    }
    cout << "\n";
    int watertrap = 0;
    for (int i = 0; i < n; i++)
    {
        int cw = min(lmax[i], rmax[i]) - arr[i];
        if (cw > 0)
            watertrap += cw;
    }
    return watertrap;
}
int main()
{
    int n;
    cout << "Enter the Size of Array = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Array = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int st = storedwater(arr, n);
    cout << st;
    return 0;
}
