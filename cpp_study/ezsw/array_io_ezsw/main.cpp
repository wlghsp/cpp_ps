#include<iostream>

using namespace std;


int N, score[100];

int main()

{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << score[i] << ' ';
    }
    
    

    return 0;
}