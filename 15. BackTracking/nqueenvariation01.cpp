#include <iostream>
#include <vector>
using namespace std;
void printboard(vector<vector<char>> board ){}
void nqueens(vector<vector<char>> board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printboard(board);
        return;
    }
}
int main()
{
    int n;
    cout << "Enter the Number of Queens = " << endl;
    cin >> n;
    vector<vector<char>> board;
    for (int i = 0; i < n; i++)
    {
        vector<char> newr;
        for (int j = 0; j < n; j++)
        {
            newr.push_back('.');
        }
        board.push_back(newr);
    }
    nqueens(board, 0);
    return 0;
}