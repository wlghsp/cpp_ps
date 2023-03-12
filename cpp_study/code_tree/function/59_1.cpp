#include <iostream>
#include <string>
#include <utility>
using namespace std;
/*
Next Level
: 해설 pair 풀이
*/

// User 정보를 나타내는 pair 선언
pair<string, int> user1 = make_pair("codetree", 10);
pair<string, int> user2;

int main() {
    freopen("input.txt", "rt", stdin);
    string user2_id;
    int user2_level;
    cin >> user2_id >> user2_level;

    // 두 번째 유저 정보 등록
    user2 = make_pair(user2_id, user2_level);

    // 결과를 출력합니다.
     cout << "user " << user1.first << " lv " << user1.second << endl;
    cout << "user " << user2.first << " lv " << user2.second << endl;
    return 0;


}