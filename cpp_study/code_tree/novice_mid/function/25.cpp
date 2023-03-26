#include <iostream>
#include <string>
using namespace std;

/*
절댓값으로 변경 : 내 풀이
*/
#define MAX_N 50

int n;
int arr[MAX_N];

void AbosoluteValue(int *a) {
  for (int i = 0; i < n; i++)
  {
    if (a[i] < 0)
    {
      a[i] = -a[i];
    }
  }
  
}


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  AbosoluteValue(arr);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}