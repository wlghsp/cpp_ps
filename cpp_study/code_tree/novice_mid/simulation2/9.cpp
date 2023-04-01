#include <iostream>
#define MAX_N 100
#define MAX_T 250

using namespace std;
/*
악수와 전염병의 상관관계 2
내 풀이
*/
/*
N - N명의 개발자
K - K번의 악수 
P - 처음 전염병 걸린 개발자 번호
T - T초 동안 악수 함

전염된 사람끼리도 전염병 옮긴 횟수에 포함
0 은 음성, 1은 양성
*/

int N, K, T, P;

// devs 개발자들, cnts는 감염 시킨 횟수
int devs[MAX_N + 1], cnts[MAX_N + 1];
pair<int, int> seconds[MAX_T + 1];


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> N >> K >> P >> T;
  devs[P] = 1;
  for (int i = 0; i < T; i++)
  {
    int t, x, y;
    cin >> t >> x >> y;
    seconds[t] = make_pair(x, y);
  }
  for(int i = 0; i < MAX_T + 1; i++) {
    int x = seconds[i].first;
    int y = seconds[i].second;
    if(devs[x] == 1 && cnts[x] < K){
      devs[y] = 1;
      cnts[x]++;
    } else if(devs[y] == 1 && cnts[y] < K) {
      devs[x] = 1;
      cnts[y]++;
    } 
    else if(devs[x] == 1 && devs[y] == 1) {
      cnts[x]++;
      cnts[y]++;
    }
  }

  for (int i = 1; i <= N; i++)
  {
    cout << devs[i];
  }
  return 0;
}