#include <iostream>
#include <string>
#define MAX_N 100
using namespace std;
/*
전부 겹치는 선분
내 풀이
*/

int n;
int x[MAX_N+ 1], y[MAX_N + 1];
int arr[MAX_N + 1];

void Input()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  for (int i = 0; i < n; i++)
  {
    int x1 = x[i], y1 = y[i];
    for (int j = x1; j <= y1; j++)
    {
      arr[j]++;
    }
  }

  for (int i = 0; i <= MAX_N; i++)
  {
      if (arr[i] == n)
      {
        cout << "Yes";
        return 0;
      }
      
  }
  cout << "No";
  return 0;
}