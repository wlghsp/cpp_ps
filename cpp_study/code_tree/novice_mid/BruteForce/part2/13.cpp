#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 50
#define MAX_M 50
#define MAX_D 1000
using namespace std;

/*
상해버린 치즈
내 풀이
*/

int N, M, D, S;

class Info {
  public:
    // p 번째 사람이 m번째 치즈를 t초에 먹은 정보
    int p, m, t;

    Info(int p, int m, int t) {
      this->p = p;
      this->m = m;
      this->t = t;
    }
    Info() {}
};

class Record {
  public:
    // p 번째 사람이 t초에 아픈 기록
    int p, t;

    Record(int p, int t) {
      this->p = p;
      this->t = t;
    }
    Record() {}
};

Info infos[MAX_D + 1];
Record records[MAX_N + 1];
int cheeses[MAX_M + 1];

void Input() {
  cin >> N >> M >> D >> S;
  for (int i = 1; i <= D; i++)
  {
    int p, m, t;
    cin >> p >> m >> t;
    infos[i] = Info(p, m, t);
  }
  for (int i = 1; i <= S; i++)
  {
    int p, t;
    cin >> p >> t;
    records[i] = Record(p, t);
  }
}


int Search() {
  int max_cnt = 0;
  // 1. 각 치즈가 상한 여부를 파악한다. 
  // * 기록에 있는 사람이 모두 먹었어야 상한 치즈임 
  // 1 로 기록된 치즈는 상했음 
  for (int k = 1; k <= M; k++)
  {
    int cnt = 0;
    
    for (int i = 1; i <= S; i++)
    {
      int p = records[i].p;
      int t = records[i].t;
      int people[MAX_N + 1] = {};
      for(int j = 1; j <= MAX_D; j++) {
        // 먹은 치즈가 k이고 먹은 사람이 아픈 기록의 사람인가
        if(infos[j].m == k && infos[j].p == p && infos[j].t < t && people[infos[j].p] == 0) {
          cnt++;
          people[infos[j].p] = 1;
        }
      }
    }
 
    if (cnt == S) {
      cheeses[k] = 1;
    }
  }

  // 2. 상한 치즈를 먹은 사람의 수를 파악
  for(int i = 1; i <= MAX_M; i++) {
    int cnt = 0;
    int people[MAX_N + 1] = {};
    for(int j = 1; j <= MAX_D; j++) {
      int m = infos[j].m;
      int p = infos[j].p;
      if (cheeses[m] == 1 && people[p] == 0) {
        people[p] = 1;
        cnt++;
      }
    }
    max_cnt = max(max_cnt, cnt);
  }
  return max_cnt; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}