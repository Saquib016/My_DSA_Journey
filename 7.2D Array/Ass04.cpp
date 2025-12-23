#include <iostream>
using namespace std;
void printarr(int brr[][100], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}
void conversion(int arr[], int n, int x, int y)
{
    int brr[100][100];
    if (x*y==n)
    {
        int k=0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                brr[i][j] = arr[k];
                k++;
            }
        }
        printarr(brr, x, y);
    }
    else
        cout << "Not Possible";
}
int main()
{
    int n;
    cout << "Enter the Size of the Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Element in the Array = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the Row of the Required matrix = " << endl;
    cin >> x;
    int y;
    cout << "Enter the Column of the Required Matrix = " << endl;
    cin >> y;
    conversion(arr, n, x, y);
}