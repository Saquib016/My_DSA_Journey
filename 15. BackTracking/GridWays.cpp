#include <iostream>
#include <string>
#include <vector>
using namespace std;
int ways(int row, int col, int n, int m)
{
    if (row == n - 1 && col == m - 1)
        return 1;
    if (row >= n || col >= m)
    {
        return 0;
    }

    int v1 = ways(row, col + 1, n, m);
    int v2 = ways(row + 1, col, n, m);
    return v1 + v2;
}
int main()
{
    int n;
    cout << "Enter the Row of the Destionation" << endl;
    cin >> n;
    int m;
    cout << "Enter the Row of the Destionation" << endl;
    cin >> m;
    cout<<ways(0, 0, n, m)<<endl;
    return 0;
}