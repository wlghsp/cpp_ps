#include<iostream>
#include<algorithm> // for sort

using namespace std;

#define MAX_SIZE 100000

int main() {

    // 입력이 많을 때는 (백준 한정...)
    std::ios::sync_with_stdio(false);
    cin.tie(0);

    // 1. 데이터를 N개 입력받는다. => A
    int dataSize;
    cin >> dataSize;
    
    int data[MAX_SIZE];

    for(int i = 0; i < dataSize; i++) {
        cin >> data[i];
    }
    // 2. 이진탐색을 위해 데이터는 정렬이 되어 있어야 한다. 
    sort(data, data + dataSize);  // 오름차순 정렬

    // 3. 찾을 데이터를 M개 입력받는다. => B
    int findNum;
    cin >> findNum;

    while (findNum--)  // 반복문이 findNuam 돈다 (문제에서 M)
    {
        int num;
        cin >> num;

           // => 각각의 M개의 원소들에 대해서 A에 있으면 "1" 출력 없으면 "0" 출력
            // N => 10만개, M=> 10만개 이므로 10만 * 10만의 탐색이 worst case
            // =====> 아 순차탐색은 되지 않고, 이진탐색을 해야겠구나. \

        int left = 0;
        int right = dataSize - 1; // 배열은 0부터 시작하니까 데이터는 0 ~ dataSize -1 에 저장됨
        bool isFinished = false;
        while (left <= right) 
        {
            int mid = (left + right) / 2;
            if (data[mid] == num) // 데이터를 찾았으면
            {
                cout << "1" << '\n';
                isFinished = true;
                break;
            }
            else if (data[mid] > num)
            {
                right = mid - 1;
            } else 
            {
                left = mid + 1;
            }
        }
        
        if (!isFinished)
        {
            cout << 0 <<'\n';
        }
    }
 
}