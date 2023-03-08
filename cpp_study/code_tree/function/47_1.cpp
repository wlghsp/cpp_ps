#include <iostream>
#include <algorithm>
using namespace std;
/*
재귀함수를 이용한 최소공배수
: 해설 풀이
*/
#define MAX_N 10

int n;
int arr[MAX_N + 1];

int LCM(int a, int b)
{
  int gcd = 1;
  for(int i = 1; i <= min(a, b); i++) {
    if (a % i == 0 && b % i == 0)
    {
      gcd = i;
    }
  }
  return a * b / gcd;
}

// index 번째 까지 인덱스의 숫자 중에 가장 큰 값을 반환합니다.
int GetLCMAll(int index) {
  // 남은 원소가 1개라면 그 자신이 답이 됩니다. 
  if(index == 1) return arr[1];

  // 1번째 ~ index - 1 번째 원소의 최소공배수를 구한 결과와 
  // 현재 index 원소의 최소공배수를 구하여 반환합니다.
  return LCM(GetLCMAll(index - 1), arr[index]);
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  cout << GetLCMAll(n);
  return 0;
}
