#include <iostream>
#include <string>
using namespace std;
/*
비오는 날 : 해설 풀이
*/

class Forecast {
  public:
    string date, day, weather;

    Forecast(string date, string day, string weather) {
      this->date = date;
      this->day = day;
      this->weather = weather;
    }
};


Forecast ans = Forecast("9999-99-99", "", "");

int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++) {
    string date, day, weather;
    cin >> date >> day >> weather;

    // Forecast 객체를 만들어 줍니다. 
    Forecast f = Forecast(date, day, weather);
    if (weather == "Rain")
    {
      //  비가 오는 경우 가장 최근인지 확인하고,
      // 가장 최근일 경우 정답을 업데이트 한다. 
      if(ans.date >= f.date) ans = f;
    }
  }
  cout << ans.date << " " << ans.day << ans.weather;
  
  return 0;
}