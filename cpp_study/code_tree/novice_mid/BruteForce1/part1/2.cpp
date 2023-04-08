#include <iostream>
#include <climits>
#define MAX_N 100

using namespace std;

/*
모이자 
내 풀이

이동거리의 합의 최솟값을 구하는 문제 
*/
int n;
// 집마다 사람의 수
int arr[MAX_N];
int ans;

void Input() {
  cin >> n;
  // 집 마다 사람의 수 입력
  for(int i = 0; i < n; i++) cin >> arr[i];
}

int BruteForce() {
  int min_sum = INT_MAX;
  for(int i = 0; i < n; i++) {
    int dis_sum = 0;
    for (int j = 0; j < n; j++)
    {
        dis_sum += abs(i - j) * arr[j];
    }

    min_sum = min(min_sum, dis_sum); 
  }
  return min_sum;
}


int main() {
  freopen("input.txt", "rt", stdin);

  Input();
  
  ans = BruteForce();

  cout << ans;
  return 0;
}