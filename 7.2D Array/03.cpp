
#include <iostream>
using namespace std;
int brutesearch(int n, int m, int arr[100][100], int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == k)
            {
                cout << i << "," << j;
                break;
            }
        }
    }
}
int rowsearch(int n, int m, int arr[100][100], int k)
{
    for (int i = 0; i < n; i++)
    {
        int st = 0;
        int en = m - 1;
        /* code */
        while (st <= en)
        {
            int mid = (st + en) / 2;
            if (arr[i][mid] == k)
            {
                cout << i << "," << mid << endl;
                return 0;
            }
            else if (arr[i][mid] > k)
                en = mid - 1;
            else
                st = mid + 1;
        }
    }
    cout << "Element not found " << endl;
    return -1;
}
bool stairsearch(int n, int m, int arr[100][100], int k)
{
    int r = 0;
    int c = n - 1;
    while (r < n && c >= 0)
    {
        int st = arr[r][c];
        if (st == k)
        {
            cout << r << "," << c;
            return true;
        }
        else if (st < k)
            r++;
        else
            c--;
    }
    cout<<"Not Found "<<endl;
    return false;
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
    cout << "Enter the Element to be Found = " << endl;
    cin >> k;
    // brutesearch(n, m, arr, k);
    // rowsearch(n, m, arr, k);
    stairsearch(n,m,arr,k);
    return 0;
}