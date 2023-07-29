#include <iostream>
#include <string>
#define MAX_N 100
using namespace std;
/*
전부 겹치는 선분
해설 풀이
*/

int n;
int x1, x2;
int max_x1;
int min_x2 = INT_MAX;



int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x1 >> x2;
    max_x1 = max(max_x1, x1);
    min_x2 = min(min_x2, x2);
  }

  if (min_x2 >= max_x1)
  {
    cout << "Yes";
  }
  else {
    cout << "No";
  }
  
  return 0;
}