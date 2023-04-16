#include <iostream>
#include <climits>
#include <string>
#define MAX_N 20
using namespace std;

/*
Carry 피하기 2
내 풀이
*/

int n;
int arr[MAX_N];
int ans;
bool found = false;

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}


int CountCarry(string a, string b) {
   int cnt = 0;
   
   int carry = 0;

   int len_a = a.length(), len_b = b.length();

   while (len_a != 0 || len_b != 0)
   {
    // Assigning the ascii value of the character
    int x = 0, y = 0;
    if (len_a > 0)
    {
      x = a[len_a - 1] - '0';
      len_a--;
    }
    if (len_b > 0)
    {
      y = b[len_b - 1] - '0';
      len_b--;
    }
    // Add both numbers/digits
    int sum = x + y + carry;
    
    // If sum >= 10, increment count
    // and set carry to 1
    if(sum >= 10) {
      carry = 1;
      cnt++;
    }
    // Else, set carry to 0
    else
      carry = 0;
   }

   return cnt;
}


bool CarryExist(string a, string b, string c) {
  int cnt  = 0;
  cnt = CountCarry(a, b); 
  if(cnt > 0) {
    return true;
  }
  cnt = CountCarry(to_string(stoi(a) + stoi(b)), c);
  if(cnt > 0) return true;

  return false;
}

int Search() {
  int max_val = INT_MIN;
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if(!CarryExist(to_string(arr[i]), to_string(arr[j]), to_string(arr[k]))) {
          found = true;
          max_val = max(max_val, (arr[i] + arr[j] + arr[k]));
        }
      }
    }
  }

  return max_val; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  ans = Search();
  cout << (found ? ans : -1);  
  return 0;
}