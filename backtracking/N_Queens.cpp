#include <bits/stdc++.h>

using namespace std;

bool canPlaceQueen(int r, int c, int n, vector<vector<char>> &board)
{
    // same column
    int i = r, j = c;
    while (i >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
    }

    // upper left diagonal
    i = r, j = c;
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    // upper right diagonal
    i = r, j = c;
    while (i >= 0 and j < n)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j++;
    }

    return true;
}

void f(int i, int n, vector<vector<char>> &board, vector<vector<vector<char>>> &boards)
{
    if (i == n)
    {
        boards.push_back(board);
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (canPlaceQueen(i, j, n, board))
        {
            board[i][j] = 'Q';
            f(i + 1, n, board, boards);
            board[i][j] = '.';
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> board(n, vector<char>(n, '.'));

    vector<vector<vector<char>>> boards;

    f(0, n, board, boards);

    cout << boards.size() << endl;

    for (int i = 0; i < boards.size(); i++)
    {
        for (int j = 0; j < boards[i].size(); j++)
        {
            for (int k = 0; k < boards[i][j].size(); k++)
            {
                cout << boards[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}