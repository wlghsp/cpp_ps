#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 1000
#define MAX_BPS 1000
using namespace std;
/*
스승의 은혜 3
내 풀이

N명의 학생에게 B만큼의 예산으로 선물을 주려고 함

학생 i가 원하는 선물의 가격 P(i)과 배송비 S(i)

선물 하나 반값 할인 쿠폰 있땅

*/

int N, B; // 학생 수 N, 예산 B
int arr[MAX_N][2]; 

void Input() {
  cin >> N >> B;
  for (int i = 0; i < N; i++)
  {
    int p, s; // p 선물 가격, 배송비 s
    cin >> p >> s;
    arr[i][0] = p + s;
    arr[i][1] = p;
    arr[i][2] = s;
  }
}

bool compare(const int* a, const int* b) {
  return a[0] < b[0];
}


int Search() {
  // 1. 가격과 배송비로 정렬

  int max_students = 0;
  for (int i = 0; i < N; i++)
  {
    int sum = 0;
    int students = 0;
    for (int j = 0; j < N; j++)
    {
      int price = (i == j) ? arr[j][1] / 2:  arr[j][1];
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