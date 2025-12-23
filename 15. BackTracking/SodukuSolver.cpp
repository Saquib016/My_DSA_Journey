#include <iostream>
#include <vector>
using namespace std;
void printSudoku(int sudoku[9][9])
{

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}
bool issafe(int sudoku[9][9], int row, int col, int digit)
{
    // vertical
    for (int i = 0; i < 8; i++)
    {
        if (sudoku[i][col] == digit)
            return false;
    }
    // horizontal
    for (int j = 0; j < 8; j++)
    {
        if (sudoku[row][j] == digit)
            return false;
    }

    // 3x3 grid
    int strow = (row / 3) * 3;
    int stcol = (col / 3) * 3;
    for (int i = strow; i < strow + 2; i++)
    {
        for (int j = stcol; j < stcol; j++)
        {
            if(sudoku[i][j]==digit) return false;
        }
    }
    return true;
}
bool sudokuSolver(int sudoku[9][9], int row, int col)
{
    if (row == 9)
    {
        printSudoku(sudoku);
        return true;
    }
    int nextrow = row;
    int nextcol = col + 1;
    if (nextcol == 9)
    {
        nextrow = row + 1;
        nextcol = 0;
    }
    if (sudoku[row][col] != 0)
    {
        return sudokuSolver(sudoku, nextrow, nextcol);
    }
    for (int digit = 1; digit <= 9; digit++)
    {
        if (issafe(sudoku, row, col, digit))
        {
            sudoku[row][col] = digit;
            if (sudokuSolver(sudoku, nextrow, nextcol))
            {
                return true;
            }
            sudoku[row][col] = 0;
        }
    }
    return false;
}
int main()
{
    int sudoku[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                        {5, 2, 0, 0, 0, 0, 0, 0, 0},
                        {0, 8, 7, 0, 0, 0, 0, 3, 1},
                        {0, 0, 3, 0, 1, 0, 0, 8, 0},
                        {9, 0, 0, 8, 6, 3, 0, 0, 5},
                        {0, 5, 0, 0, 9, 0, 6, 0, 0},
                        {1, 3, 0, 0, 0, 0, 2, 5, 0},
                        {0, 0, 0, 0, 0, 0, 0, 7, 4},
                        {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    sudokuSolver(sudoku, 0, 0);
    return 0;
}