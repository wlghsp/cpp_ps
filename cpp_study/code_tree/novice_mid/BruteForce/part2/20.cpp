#include <iostream>
#include <algorithm>
using namespace std;
/*
탐색 범위가 불명확한 경우에 대한 완전 탐색

A, B 앞에 카드가 단 한 장만 놓여있습니다.
A의 경우 카드에 적혀있는 숫자가 10보다 작으면 5점을, 10 이상이며 20 미만이면 8점을,
그렇지 않다면 10점을 얻게 됩니다.
B의 경우  카드에 적혀있는 숫자가 6보다 작으면 12점을, 6 이상이며 15 미만이면 10점을,
그렇지 않다면 6점을 얻게 됩니다.

예를 들어, 카드에 적혀 있는 숫자가 9였다면, A는 5점을, B는 10점을 얻게 되어 총
15점을 얻게 됩니다.

A, B가 얻을 수 있는 점수의 합 중 가능한 최댓값은 무엇일까요?
*/

/*
이 문제에서는 카드에 적혀 있을 수 있는 숫자의 범위가 주어져 있지 않습니다. 
다만, 카드의 숫자가 0보다 작거나 넉넉잡아 30보다 큰 경우는 굳이 살펴볼 필요가 없다는 것을 어렵지 않게 알 수 있습니다. 
*/
int max_score = 0;

int GetScoreA(int num) {
  if(num < 10) return 5;
  else if (num < 20)  return 8;
  else return 10;
}

int GetScoreB(int num) {
  if(num < 6) return 12;
  else if (num < 15)  return 10;
  else return 6;
}


int main() {
  for(int i = 0; i < 31; i++) {
    int score_a = GetScoreA(i);
    int score_b = GetScoreB(i);
    max_score = max(max_score, score_a + score_b);
  }

  cout << max_score;
  return 0;
}


/*
이처럼 탐색 범위가 직접 주어지지 않은 경우라도, 
꼭 탐색이 필요한 범위를 잘 지정하여 해당 범위 내의 숫자들을 
일일이 살펴보며 진행하는 방식의 완전 탐색을 이용하여 문제를 깔끔하게 해결할 수 있음

*/