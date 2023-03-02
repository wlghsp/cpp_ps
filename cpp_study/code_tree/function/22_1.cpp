#include <iostream>
#include <string>
using namespace std;

/*
짝수만 2로 나누기 : 해설 풀이

*/
#define MAX_N 50
int n;
int arr[MAX_N];

void modify(int *a) {
  for (int i = 0; i < n; i++)
  {
    if(a[i] % 2 == 0) a[i] /= 2;
  }
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  modify(arr);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}