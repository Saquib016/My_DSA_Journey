#include <iostream>
#include <climits>
using namespace std;
void sparsemat(int n,int m,int arr[100][100]){
    int srow=0;
    int erow=n-1;
    int scol=0;
    int ecol=n-1;
    while(srow<=erow&&scol<=erow){
        //top
        for (int j = scol; j <=ecol; j++)
        {
            cout<<arr[srow][j]<<" ";
        }
        //right
        for (int i=srow+1; i<=erow; i++)
        {
            cout<<arr[i][ecol]<<" ";
        }
        //bottom
        for (int j = ecol-1; j >=scol; j--)
        {
            cout<<arr[erow][j]<<" ";
        }
        //left
        for (int i = erow-1;  i>=srow+1; i--)
        {
            cout<<arr[i][scol]<<" ";
        }
        srow++;
        erow--;
        ecol--;
        scol++;
    }
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
    sparsemat(n,m,arr);
    return 0;
}