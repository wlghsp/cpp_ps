#include <iostream>
#include <string>
#define MAX_N 100
using namespace std;
/*
구역 청소
내 풀이
*/

int a, b, c, d;
int arr[MAX_N+ 1];

void Input()
{
  cin >> a >> b >> c >> d;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  for (int i = a; i < b; i++)
  {
    arr[i]++;
  }

  for (int i = c; i < d; i++)
  {
    arr[i]++;
  }
  
  int ans = 0;
  for (int i = 0; i <= MAX_N; i++)
  {
      if (arr[i] > 0) ans++; 
  }
  
  cout << ans;
  return 0;
}