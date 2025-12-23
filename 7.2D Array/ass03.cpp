
#include <iostream>
using namespace std;
void printarr(int n,int m,int arr[][100]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    
}
int treanspose(int n, int m, int arr[][100])
{
    int transpose[100][100];
    int temp1=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j<m; j++)
        {
            transpose[j][i]=arr[i][j];
        }
        
    }

    printarr(n,m,transpose);
    return 0;
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
    treanspose(n, m, arr);
    return 0;
}