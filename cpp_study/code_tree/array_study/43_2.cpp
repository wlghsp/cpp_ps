#include <iostream>
#define MAX_N 1000
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    int a[MAX_N];
    
    int indices[MAX_N];
    int cnt = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    // 첫 번째 원소는 항상 답이 됩니다. 
    indices[cnt++] = 0;

    // 바로 직전에 답으로 추가한 원소보다 
    // 현재 원소가 더 큰 경우에만 답으로 추가합니다. 
    for(int i = 1; i < n; i++) {
        int last_idx = indices[cnt - 1];
        if(a[i] > a[last_idx]) indices[cnt++] = i;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        int idx = indices[i];
        cout << idx + 1 << " ";
    }
   
    return 0;
}