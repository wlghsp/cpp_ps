#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
#include <vector>
#include <sstream>
using namespace std;
/*
비오는 날 : 내 풀이
*/

class Day {
  public:
    string date;
    string day;
    string weather;

    Day(string date, string day, string weather) {
      this->date = date;
      this->day = day;
      this->weather = weather;
    }
    Day() {}
};


bool compare(const tuple<string, string, string>& t1, const tuple<string, string, string>& t2) {
  int year1 = stoi(get<0>(t1));
  int month1 = stoi(get<1>(t1));
  int day1 = stoi(get<2>(t1));
  int year2 = stoi(get<0>(t2));
  int month2 = stoi(get<1>(t2));
  int day2 = stoi(get<2>(t2));

  if(year1 == year2){
    if(month1 == month2){
      return day1 < day2;
    }  
    return month1 < month2;
  }
  return year1 < year2;
}


vector<string> split(string sentence, char separator) {
  vector<string> answer;
  stringstream ss(sentence);
  string tmp;

  while(getline(ss, tmp, separator)) {
    answer.push_back(tmp);
  }
  return answer;
}


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  vector<tuple<string, string, string>> day_list;
  Day days[n];
  for(int i = 0; i < n; i++) {
    string date, day, weather;
    cin >> date >> day >> weather;
    if (weather.compare("Rain") == 0)
    {
      vector<string> splitedDate = split(date, '-');
      day_list.push_back(tuple<string, string, string>(splitedDate[0], splitedDate[1], splitedDate[2]));  
    }
    days[i] = Day(date, day, weather);
  }

  sort(day_list.begin(), day_list.end(), compare);
  string thedate = get<0>(day_list[0]) + "-"  + get<1>(day_list[0]) + "-" + get<2>(day_list[0]);
  for(auto day: days) {
    if(thedate.compare(day.date) == 0) {
      cout << day.date << " " << day.day << " " << day.weather;
    }
  }
  return 0;
}