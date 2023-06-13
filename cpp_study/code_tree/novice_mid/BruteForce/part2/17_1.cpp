#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;
/*
스승의 은혜 3
해설 풀이
*/

int N, B; // 학생 수 N, 예산 B
int p[MAX_N];
int s[MAX_N];

int main() {
  freopen("input.txt", "rt", stdin);
  cin >> N >> B;

  for(int i = 0; i < N; i++) cin >> p[i] >> s[i];

  int ans = 0;


  // 한 명의 학생에 선물 쿠폰을 쏠 때 선물 가능한 학생의 최대 명수를 구합니다.
  for(int i = 0; i < N; i++) {
    // i번째 학생의 선물에 쿠폰을 쏠 때 선물 가능한 학생 수를 구합니다. 

    // tmp 배열을 만들어 i번째 학생의 선물에 쿠폰을 쓸 때
    // 각 학생의 원하는 선물 가격을 저장합니다. 
    int tmp[MAX_N] = {};
    for(int j = 0; j < N; j++) {
      tmp[j] = p[j] + s[j];
    }
    tmp[i] = p[i] / 2 + s[i];

    // 학생을 선물 가격 순으로 정렬합니다. 
    // 선물 가격이 가장 작은 학생부터 선물을 사 줄 때,
    // 반드시 가장 많은 학생에게 선물을 줄 수 있습니다. 
    sort(tmp, tmp + N);

    int student = 0;
    int amount = 0;

    // 가장 많은 학생에게 선물을 줄 때, 그 학생 수를 구합니다. 
    // student: 선물 받은 학생 수 / amount : 현재까지 쓴 돈
    for(int j = 0; j < N; j++) {
      if(amount + tmp[j] > B)
        break;
      amount += tmp[j];
      student++;
    }
    ans = max(ans, student);
  }

  cout << ans;
  return 0;
}