#include <iostream>
using namespace std;
void findnum(int arr[][50], int n, int m, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                count++;
            }
        }
    }
    cout << "The Number Of Times " << x << "comes = " << count;
    return;
}
int main()
{
    int n;
    cout << "Enter the Row = " << endl;
    cin >> n;
    int m;
    cout << "Enter the Column = " << endl;
    cin >> m;
    int x;
    cout << "Enter the Numeber To be Printed = " << endl;
    cin >> x;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    findnum(arr, n, m, x);
}