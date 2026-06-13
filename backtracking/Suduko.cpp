#include <bits/stdc++.h>

using namespace std;

bool canPlace(int r, int c, char val, vector<vector<char>> &board)
{

    int rowLength = board.size();
    int colLength = board[c].size();

    // same row
    for (int j = 0; j < 9; j++)
    {
        if (board[r][j] == val)
        {
            return false;
        }
    }

    // same col
    for (int i = 0; i < 9; i++)
    {
        if (board[i][c] == val)
        {
            return false;
        }
    }

    // same box
    int sr = (r / 3) * 3;
    int sc = (c / 3) * 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[sr + i][sc + j] == val)
            {
                return false;
            }
        }
    }

    return true;
}

bool f(int i, int j, vector<vector<char>> &board)
{

    if (i == board.size())
    {
        // All rows done
        // print board
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }

        return true;
    }

    if (j == board[i].size())
    {
        return f(i + 1, 0, board); // move to next row
    }

    if (board[i][j] != '.')
    {
        return f(i, j + 1, board);
    }

    // try placing a digit 1-9
    for (int val = '1'; val <= '9'; val++)
    {
        if (canPlace(i, j, val, board))
        {
            board[i][j] = val;
            if (f(i, j + 1, board))
            {
                return true;
            }
            board[i][j] = '.';
        }
    }

    return false;
}

int main()
{
    vector<vector<char>> suduko(9, vector<char>(9));

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> suduko[i][j];
        }
    }

    f(0, 0, suduko);
}