#include <iostream>
#include <string>
#define MAX_N 26
#define MAX_PM 100
using namespace std;
/*
코딩톡
내 풀이
n : 코딩톡 방에 있는 사람 수
m : 코딩톡 방에 올라온 메시지 정보의 수
p : 확인이 필요한 메시지 번호

c : 사람 
u : 해당 메시지를 읽지 않은 사람 수
*/


int n, m, p;
char c[MAX_PM + 1];
int u[MAX_PM + 1];
int arr[MAX_N];

void Input()
{
  cin >> n >> m >> p;
  for (int i = 0; i < m; i++)
  {
    cin >> c[i] >> u[i];
  }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  if (u[p-1] == 0)
  {
    return 0;
  }
  

  for (int i = p - 1; i < m; i++)
  {
     arr[c[i] - 65]++;
  }

  for (int i = p - 2; i >= 0; i--)
  {
    if (u[i] == u[p -1])
    {
      arr[c[i] - 65]++;
    }
    
  }
  
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      cout << (char) (i + 65) << " ";
    }
  }
  return 0;
}