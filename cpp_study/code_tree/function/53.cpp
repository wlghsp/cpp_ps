#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*
두 개의 동일한 수열
: 내 풀이
*/


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int nums[n];
  for(int i = 0; i < 2 * n; i++) {
    cin >> nums[i];
  }
  sort(nums, nums+(2*n));
  int sum_a = 0, sum_b = 0;
  for(int i= 0; i < n; i++) {
    if (i % 2 == 0)
    {
      sum_a += nums[i] + nums[(2 * n) - i - 1];
    } else {
      sum_b += nums[i] + nums[(2 * n) - i - 1];
    }
    
      
  }
  cout << max(sum_a, sum_b);
  
  return 0;
}
