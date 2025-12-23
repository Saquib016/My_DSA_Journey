
#include <iostream>
using namespace std;
int sumarr(int n, int m, int arr[][100], int k)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == k-1)
                sum += arr[i][j];
        }
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the row  of a 2D Array = " << endl;
    cin >> n;
    int m;
    cout << "Enter the Column of a 2D Array = " << endl;
    cin >> m;
    int arr[100][100];
    cout << "Enter the Elements " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }
    int k;
    cout << "Enter the row whose sum to be Found = " << endl;
    cin >> k;
    cout << k << " row sum is " << sumarr(n, m, arr, k) << endl;
    return 0;
}