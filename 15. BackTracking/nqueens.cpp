#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printboard(vector<vector<char>> board)
{
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "_________________" << endl;
}
bool issafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    // Horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'q')
            return false;
    }
    // Vertical
    for (int j = 0; j < row; j++)
    {
        if (board[j][col] == 'q')
            return false;
    }
    // Diagonal left
    for (int i = row, j = col; i >= 0 && j >= 0; j--, i--)
    {
        if (board[i][j] == 'q')
            return false;
    }
    // Diagonal right
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'q')
            return false;
    }
    return true;
}
void nQueen(vector<vector<char>> board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printboard(board);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (issafe(board, row, i))
        {
            board[row][i] = 'q';
            nQueen(board, row + 1);
            board[row][i] = '.';
        }
    }
}

int main()
{
    vector<vector<char>> board;
    int n;
    cout << "Enter the Number of Queens = " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<char> newr;
        for (int i = 0; i < n; i++)
        {
            newr.push_back('.');
        }
        board.push_back(newr);
    }
    nQueen(board, 0);
    return 0;
}