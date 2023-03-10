#include <iostream>
#include <algorithm>
using namespace std;
/*
2개씩 그룹짓기
: 내 풀이
*/


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int nums[2 * n];
  for(int i = 0; i < 2 * n; i++) {
    cin >> nums[i];
  }
  sort(nums, nums+(2*n));
  int maxVal = nums[0] + nums[(2 * n) - 0 - 1];
  for(int i= 1; i < n; i++) {
      maxVal = max(maxVal, nums[i] + nums[(2 * n) - i - 1]);
  }
  cout << maxVal;
  return 0;
}
