#include <iostream>
#include <algorithm>
#include <climits>
#define N 6
using namespace std;

/*
개발자의 능력 2
해설 풀이
*/

int arr[N];
int total = 0; 

void Input() {
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    total += arr[i];
  }
}

int Diff(int i, int j, int k, int l) {
  int sum1 = arr[i] + arr[j];
  int sum2 = arr[k] + arr[l];
  int sum3 = total - (sum1 + sum2);

  // 세 팀의 차이 중 최댓값 = (가장 높은값 - 가장 낮은값)
  int ret = abs(sum1 - sum2);
  ret = max(ret, abs(sum2 - sum3));
  ret = max(ret, abs(sum3 - sum1));
  return ret;
}

int Search() {
  int min_diff = INT_MAX;
  // 첫 번째 팀원
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {

      // 두 번째 팀원
      for (int k = 0; k < N; k++)
      {
        for (int l = k + 1; l < N; l++)
        {
          // 첫 번째 팀원과 두 번째 팀원이 겹치지 않도록 함
          if(k == i || k == j || l == i || l == j ) 
            continue; 
          
          min_diff = min(min_diff, Diff(i, j, k, l));
        }
      }
    }
  }
  return min_diff;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}