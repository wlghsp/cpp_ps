#include <iostream>
#include <string>
using namespace std;

/*
수열 B가 A의 연속부분수열인가

*/
int n1, n2;
string consecutiveSubSequence(int a[], int b[]) {
  
  int idx = 0;
  for (int i = 0; i < n1; i++)
  {
    if (a[i] == b[idx])
    {
      idx++;
      int j = i + 1;
      while (idx < n2)
      {
        if (a[j] == b[idx])
        {
          j++;
          idx++;
        } else break;
      }
      if (idx == n2) return "Yes";
    } 
  }
  return "No";
}


int main()
{ 
  freopen("input.txt", "rt", stdin);
  cin >> n1 >> n2;
  int arr1[n1];
  int arr2[n2];
  for (int i = 0; i < n1; i++)
  {
    cin >> arr1[i];
  }
  for (int i = 0; i < n2; i++)
  {
    cin >> arr2[i];
  }
  string result = consecutiveSubSequence(arr1, arr2);
  cout << result;
  return 0;
}