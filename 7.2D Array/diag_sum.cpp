#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter The Row & Column = " << endl;
    cin >> x;
    int arr[x][x];
    cout << "Enter the Elements into Array = ";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The Given Array is = " << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i = j || j == x - i - 1)
            {
                
            sum += arr[i][i];
            }

            if (i = j && j == x - i - 1)
            {
                sum -= arr[i][j];
            }
        }
    }
    cout << "The Sum Of The Diagnoal = " << sum << "\n";
    return 0;
}