#include <iostream>
#include <algorithm>
#define MAX_N 100
#define MAX_T 250

using namespace std;
/*
악수와 전염병의 상관관계 2
해설 풀이
*/


int N, K, T, P;
bool infected[MAX_N + 1];
int shake_num[MAX_N + 1];

// 악수의 정보를 나타내는 클래스 선언
class Shake {
  public:
    int time;
    int person1;
    int person2;
    Shake(int time, int person1, int person2) {
      this->time = time;
      this->person1 = person1;
      this->person2 = person2;
    }
    Shake() {}
};


// Custom Comparator
bool cmp(const Shake &a, const Shake &b) {
  // 시간을 기준으로 오름차순으로 정렬합니다.
  return a.time < b.time;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> N >> K >> P >> T;
  infected[P] = true;

  Shake shakes[MAX_T];

  for (int i = 0; i < T; i++)
  {
    int t, x, y;
    cin >> t >> x >> y;
    shakes[i] = Shake(t, x, y);
  }

  sort(shakes, shakes + T, cmp);

  for(int i = 0; i < T; i++) {
    int x = shakes[i].person1;
    int y = shakes[i].person2;

    if(infected[x]) shake_num[x]++;
    if(infected[y]) shake_num[y]++;

    if(shake_num[x] <= K && infected[x]) infected[y] = true;
    if(shake_num[y] <= K && infected[y]) infected[x] = true;
  }

  for (int i = 1; i <= N; i++)
  {
    if(infected[i])
      cout << 1;
    else
      cout << 0;
  }
  return 0;
}