#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX_N 10
using namespace std;

/*
숫자 카운트
내 풀이
*/

class Count
{
public:
  int num, cnt1, cnt2;
  Count(int num, int cnt1, int cnt2)
  {
    this->num = num;
    this->cnt1 = cnt1;
    this->cnt2 = cnt2;
  }
  Count() {}
};

int N;
Count counts[MAX_N];

void Input()
{
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int num, cnt1, cnt2;
    cin >> num >> cnt1 >> cnt2;
    counts[i] = Count(num, cnt1, cnt2);
  }
}

bool Check(int num, int cnt1, int cnt2, int i, int j, int k) {
  int c1 = 0;
  int c2 = 0;
  int one = num % 10;
  int ten = num / 10 % 10;
  int hun = num / 100;

  if (one == k) c1++;
  if (ten == j) c1++;
  if (hun == i) c1++;
  if (one == j || one == i) c2++;
  if (ten == k || ten == i) c2++;
  if (hun == j || hun == k) c2++;
  return (cnt1 == c1 && cnt2 == c2);
}


int Search()
{
  int cnt = 0;
  for (int i = 1; i <= 9; i++)
  {
    for (int j = 1; j <= 9; j++)
    {
      for (int k = 1; k <= 9; k++)
      { 
        if(i == j || j == k || k == i) {
          continue;
        }
        bool pass = true;
        for (int l = 0; l < N; l++)
        {
          Count c = counts[l];
          int num = c.num;
          int cnt1 = c.cnt1;
          int cnt2 = c.cnt2;
          if (!Check(num, cnt1, cnt2, i, j, k))
          {
            pass = false;
            break;
          }
        }
        if (pass)
        {
          cnt++;
        }
      }
    }
  }
  return cnt;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}
