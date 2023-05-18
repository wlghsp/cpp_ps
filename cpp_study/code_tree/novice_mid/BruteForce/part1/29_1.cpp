#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
G or H 2
해설 풀이
*/

int N;
int arr[MAX_N + 1];

void Input() {
  cin >> N;
  for (int i = 0; i < N; i++) {
      int x;
      char c;
      cin >> x >> c;
      if(c == 'G')
        arr[x] = 1;
      else
        arr[x] = 2;
  }
}

int Search() {
  int max_size = 0;
  if (N == 1) return 0;

  for(int i = 0; i <= MAX_N; i++) {
    for(int j = i + 1; j <= MAX_N; j++) {
        if(arr[i] == 0 || arr[j] == 0) continue;

        int g = 0, h = 0;
        for(int k = i; k <= j; k++) {
          if(arr[k] == 1) g++;
          else if (arr[k] == 2) h++;
        }
        if (g == 0 || h == 0 || g == h) {
            int size = j - i;
            max_size = max(max_size, size);
        }
    }
  }
  return max_size;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}