#include <iostream>
using namespace std;
void array()
{
    int size = 5;
    int *arr = new int[size];
    arr[0] = 5;
    cout << arr[0];
    delete[] arr;
}
void matrix()
{
    int row;
    int col;
    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }
    int x=1;
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            matrix [i][j]=x++;
            cout<<matrix[i][j];
        }
    }
}
int main()
{
    array();
    matrix();
}