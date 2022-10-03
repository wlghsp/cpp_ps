#include<iostream>

using namespace std;

int Row, Col, Board[100][100];

int main() 
{
    freopen("input2.txt", "rt", stdin);
    cin >> Row >> Col;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cin >> Board[i][j];
        }
        
    }


    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << Board[i][j] << ' ';
        }
        cout << '\n';
        
    }
    
}