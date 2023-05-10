#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

/*
특정 구간의 원소 평균값
내 풀이
*/

int N;
int arr[MAX_N];

void Input() {
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int cnt = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {   
        int sum = 0;
        for(int k = i; k <= j; k++)
            sum += arr[k];
        double avg = (double) sum / (j - i + 1);

        for(int t = i; t <= j; t++) 
            if (arr[t] == avg)
            {
                cnt++;
                break;
            }
    }
  }
  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}