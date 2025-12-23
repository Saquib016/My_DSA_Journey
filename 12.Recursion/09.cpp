// Tiling Problem
#include <iostream>
using namespace std;
int tile(int x, int n) //2xn tile problem
{
    if (n == 0 || n == 1)
        return 1;
    return tile(x, n - 1) + tile(x, n - 2); //vertical + Horizontal choise 
}
int main()
{
    int n;
    cout << "Enter the Size of the Tile = " << endl;
    cin >> n;
    cout << tile(2, n);
    return 0;
}
