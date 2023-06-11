#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 1000
using namespace std;

/*
스승의 은혜 2
해설 풀이
*/

int n, b; // 학생 수 n, 예산 b
int prices[MAX_N];

void Input()
{
  cin >> n >> b;
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i];
  }
}

int Search()
{
  int max_students = 0;

  for (int i = 0; i < n; i++)
  {

    int tmp[MAX_N] = {};
    for (int j = 0; j < n; j++)
    {
      tmp[j] = prices[j];
    }
    tmp[i] /= 2;

    sort(tmp, tmp + n);

    int sum = 0;
    int students = 0;
    for (int j = 0; j < n; j++)
    {
      if ((sum + tmp[j]) > b) break;
      sum += tmp[j];
      students++;
    }
    max_students = max(students, max_students);
  }
  return max_students;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}