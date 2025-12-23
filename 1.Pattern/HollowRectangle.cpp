#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of Stars in rows = ";
    cin >> n;
    int m;
    cout << "Enter Number of Stars in columns = ";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= m; j++)
        {
            /* code */
            if (i == 1 && i == n && j == 1 && j == m)
                cout << " * ";
                else cout<<" ";
        }
        cout << endl;
    }

    return 0;
}
