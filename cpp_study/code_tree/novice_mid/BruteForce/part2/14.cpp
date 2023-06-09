#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define MAX_N 20
#define MAX_K 10
using namespace std;
/*
개발자의 순위
내 풀이
*/

int K, N;
vector<vector<int>> ranks;

void Input() {
  cin >> K >> N;
  for (int i = 0; i < K; i++)
  {
    vector<int> rank;
    for (int j = 0; j < N; j++)
    { int num;
      cin >> num;
      rank.push_back(num);  
    }
    ranks.push_back(rank);  
  }
}

int findIndex(const vector<int>& rank, int target) {
  for (int i = 0; i < rank.size(); i++)
  {
    if(rank[i] == target) {
      return i;
    }
  }
  return -1;
}

int Search() {
  int cnt = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      if(i == j) continue;
      
      bool right = true;

      for(int k = 0; k < K; k++) {
          vector<int> rank = ranks[k];
          // i, j 에서 i의 인덱스가 j 보다 작은지 확인 
          if(findIndex(rank, i) >= findIndex(rank, j)) {
            right = false;
            break;
          }
      }

      if (right) cnt++;
    }
  }
  
  return cnt; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}