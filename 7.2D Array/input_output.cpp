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
}