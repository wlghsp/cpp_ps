#include <iostream>
#define MAX_N 100
using namespace std;

/*
일렬로 서있는 소 2
내 풀이 
*/

int n;
int a[MAX_N];
int cnt = 0;

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
}

void Search() {
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (a[i] <= a[j] && a[j] <= a[k])
        {
        cnt++;
        }
      }
    }
  }
}


int main() {
  freopen("input.txt", "rt", stdin);

  Input();

  Search();
  
  cout << cnt;

  return 0;
}