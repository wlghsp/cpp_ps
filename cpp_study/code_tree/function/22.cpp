#include <iostream>
#include <string>
using namespace std;

/*
짝수만 2로 나누기 : 내 풀이

*/

void evenNumDivide(int *a, int size) {
  for (int i = 0; i < size; i++)
  {
    if(a[i] % 2 == 0) a[i] /= 2;
  }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  evenNumDivide(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}