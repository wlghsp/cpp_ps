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
  string num;
  int cnt1, cnt2;
  Count(string num, int cnt1, int cnt2)
  {
    this->num = num;
    this->cnt1 = cnt1;
    this->cnt2 = cnt2;
  }
  Count() {}
};

int N;
Count counts[10];

void Input()
{
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    string num;
    int cnt1, cnt2;
    cin >> num >> cnt1 >> cnt2;
    counts[i] = Count(num, cnt1, cnt2);
  }
}

bool Check(string num, int cnt1, int cnt2, int i, int j, int k) {
  int c1 = 0;
  int c2 = 0;
  char one = (char)(k + 48);
  char ten = (char)(j + 48);
  char hun = (char)(i + 48);

  if (num[2] == one) c1++;
  else if (num.find(one) != string::npos) c2++;
  if (num[1] == ten) c1++;
  else if (num.find(ten) != string::npos) c2++;
  if (num[0] == hun) c1++;
  else if (num.find(hun) != string::npos) c2++;
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
          string num = c.num;
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
