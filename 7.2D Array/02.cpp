// Diagonal sum
#include <iostream>
using namespace std;
int diagonalmat(int n, int m, int arr[100][100])
{
    int sum = 0;
    int i = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
                sum += arr[i][j];
            else if (i + j == n - 1)
                sum += arr[i][j];
        }
    }
    return sum;
}
int diagoanlmatopt(int n,int m, int arr[100][100]){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i][i];
        if(i!=n-i-1) sum+=arr[i][i];
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
    cout << "The sum of the Diagonal elements of the given matrix is = " << diagoanlmatopt(n, m, arr);
}