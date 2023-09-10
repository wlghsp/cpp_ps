#include <iostream>
#include <string>
#define MAX_N 100
using namespace std;
/*
비둘기와 전기줄
내 풀이
*/

int n;
int birds[MAX_N];
int loc[MAX_N];
string arr[11];

void Input()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> birds[i] >> loc[i];
  }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    arr[birds[i]] += to_string(loc[i]);
  }
  for (int i = 1; i < 11; i++)
  {
    for (int j = 1; j < arr[i].length(); j++)
    {
      if(arr[i][j] != arr[i][j - 1]) cnt++;
    }
  }
  cout << cnt;
  return 0;
}