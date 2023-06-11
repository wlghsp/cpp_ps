#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 1000
using namespace std;

/*
스승의 은혜 2
내 풀이
*/

int n, b; // 학생 수 n, 예산 b
int prices[MAX_N];

void Input() {
  cin >> n >> b;
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i];
  }
}


int Search() {
  sort(prices, prices + n);
  int max_students = 0;

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    int students = 0;
    for (int j = 0; j < n; j++)
    {
      int price = (i == j) ? prices[j] / 2 : prices[j];
      if((sum + price) <= b) {
        sum += price;
        students++;
      }
    }
    max_students = max(students, max_students); 
  }
  return max_students; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}