
#include <iostream>
using namespace std;
int numel(int n, int m, int arr[][100], int k)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==k) x++;
        }
        
    }
    return x;
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
    cout<<k<<" comes "<<numel(n, m, arr, k)<<" times "<<endl;
    return 0;
}