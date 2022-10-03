#include <iostream>

using namespace std;

int row, col, x, y, board[100][100];


void cross() 
{
    if (board[x][y] != 0) return;
    board[x][y] = 1;
    for (int i = x - 1; i >= 0; --i)
    {
        if (board[i][y] != 0) break;
        board[i][y] = 1;
        
    }
    for (int i = x + 1; i < row; i++)
    {
        if (board[i][y] != 0) break;
        board[i][y] = 1;
        
    }
    
    for (int i = y - 1; i >= 0; --i)
    {
        if (board[x][i] != 0) break;
        board[x][i] = 1;
        
    }
    for (int i = y + 1; i < col; i++)
    {
        if (board[x][i] != 0) break;
        board[x][i] = 1;
        
    }
    
    
}

int main() 
{

    freopen("input3.txt", "rt", stdin);
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> board[i][j];
        }
    }

    cin >> x >> y;
    cross();

      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}