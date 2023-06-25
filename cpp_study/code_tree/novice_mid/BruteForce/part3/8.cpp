#include <iostream>
#include <climits>
#include <vector>
#define MAX_N 100
#define MAX_XY 100
using namespace std;
/*
팀으로 하는 틱택토 2
내 풀이
*/

char nums[3][3];

void Input() {
  string a, b, c;
  cin >> a >> b >> c;
  nums[0][0] = a[0];
  nums[0][1] = a[1];
  nums[0][2] = a[2];
  nums[1][0] = b[0];
  nums[1][1] = b[1];
  nums[1][2] = b[2];
  nums[2][0] = c[0];
  nums[2][1] = c[1];
  nums[2][2] = c[2];
  
}

int Search() {
  int ans = 0;
  for (int i = 1; i <= 9; i++)
  {
    for (int j = i + 1; j <= 9; j++)
    {
      bool found = false;
      // 가로 확인
      for (int k = 0; k < 3; k++)
      {
        bool num1 = false;
        bool num2 = false;
        bool num3 = false;
        for (int l = 0; l < 3; l++)
        {
          int num = nums[k][l] - 48;
          if(i == num) {
            num1 = true;
          } else if (j == num) {
            num2 = true;
          } else {
            num3 = true;
            break;
          }
        }
        if(num1 && num2 && !num3) {
          found = true;
        }
      }
    

      // 세로 확인
      for (int k = 0; k < 3; k++)
      {
        bool num1 = false;
        bool num2 = false;
        bool num3 = false;
        for (int l = 0; l < 3; l++)
        {
          int num = nums[l][k] - 48;
          if(i == num) {
            num1 = true;
          } else if (j == num) {
            num2 = true;
          } else {
            num3 = true;
            break;
          }
        }
         if(num1 && num2 && !num3) {
          found = true;
        }
      }
      

      // 왼쪽에서 오른쪽 대각선 확인
      bool num1 = false;
      bool num2 = false;
      bool num3 = false;
      for (int k = 0; k < 3; k++)
      {
        int num = nums[k][k] - 48;
        if(i == num) {
          num1 = true;
        } else if (j == num) {
          num2 = true;
        } else {
          num3 = true;
          break;
        }
      }
       if(num1 && num2 && !num3) {
          found = true;
        }

      // 오른쪽에서 왼쪽 대각선 확인
      num1 = false;
      num2 = false;
      num3 = false;
      for (int k = 2; k >= 0; k--)
      {
        int num = nums[2 - k][k] - 48;
        if(i == num) {
          num1 = true;
        } else if (j == num) {
          num2 = true;
        } else {
          num3 = true;
          break;
        }
      }
      if(num1 && num2 && !num3) {
          found = true;
      }
      if(found) ans++;
    }
  }
  
  return ans;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}