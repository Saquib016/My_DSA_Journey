#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter The Row = " << endl;
    cin >> x;
    cout << "Enter The Column = " << endl;
    cin >> y;
    int arr[x][y];
    cout << "Enter the Elements into Array = ";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The Given Array is = " << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    int srow = 0;
    int scol = 0;
    int erow = x - 1;
    int ecol = y - 1;
    while (srow <= erow && scol <= ecol)
    {
        for (int j = scol; j <= ecol; j++)
        {
            cout << arr[srow][j] << " ";
        }
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << arr[i][ecol] << " ";
        }
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            cout << arr[erow][j] << " ";
        }
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << arr[i][scol] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout << "\n";

    return 0;
}