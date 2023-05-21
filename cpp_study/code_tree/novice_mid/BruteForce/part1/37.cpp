#include <iostream>
#include <algorithm>
#include <climits>
#define N 6
using namespace std;

/*
개발자의 능력 2
내 풀이
*/

int arr[N];
int total = 0; 

void Input() {
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    total += arr[i];
  }
}

int Search() {
  int min_diff = INT_MAX;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      for (int k = 0; k < N; k++)
      {
        for (int l = 0; l < N; l++)
        {
          if(i == j || i == k || i == l || j == k || j == l
          || k == l ){ continue; }
          int sum1 = arr[i] + arr[j]; 
          int sum2 = arr[k] + arr[l];
          int sum3 = total - (sum1 + sum2);
          int sum3 = total - (sum1 + sum2);
          int max_sum, min_sum;
          if(sum1 > sum2 && sum1 > sum3) {
            max_sum = sum1;
          } else if (sum2 > sum1 && sum2 > sum3) {
            max_sum = sum2;
          } else if (sum3 > sum1 && sum3 > sum2) {
            max_sum = sum3;
          }
          if(sum1 < sum2 && sum1 < sum3) {
            min_sum = sum1;
          } else if (sum2 < sum1 && sum2 < sum3) {
            min_sum = sum2;
          } else if (sum3 < sum1 && sum3 < sum2) {
            min_sum = sum3;
          }
          if(sum1 == sum2 && sum2 == sum3 && sum3 == sum1) {
            max_sum = sum1, min_sum = sum2;
          }
          min_diff = min(min_diff, (max_sum - min_sum));
        }
      }
    }
  }
  return min_diff;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}