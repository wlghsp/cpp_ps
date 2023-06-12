#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
 #include <tuple>
#define MAX_N 1000
#define MAX_BPS 1000
using namespace std;
/*
스승의 은혜 3
내 풀이
*/

int N, B; // 학생 수 N, 예산 B
vector<tuple<int, int, int>> v; 

void Input() {
  cin >> N >> B;
  for (int i = 0; i < N; i++)
  {
    int p, s; // p 선물 가격, 배송비 s
    cin >> p >> s;
    v.push_back(make_tuple(p+s, p, s));
  }
}

bool compare(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    return get<0>(a) < get<0>(b);
}
int Search() {
  // 1. 가격과 배송비로 정렬
  sort(v.begin(), v.end(), compare);

  int max_students = 0;
  for (int i = 0; i < N; i++)
  {
    int sum = 0;
    int students = 0;
    for (int j = 0; j < N; j++)
    {
      int price = (i == j) ? get<1>(v[j]) / 2 + get<2>(v[j]):  get<1>(v[j]) + get<2>(v[j]);
      if ((sum + price) <= B) {
        sum += price;
        students++;
      }
      max_students = max(students, max_students);
    }
  }

  return max_students; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}