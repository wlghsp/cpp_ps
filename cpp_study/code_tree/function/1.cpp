#include <iostream>

using namespace std;

void Print10Stars() {
    for(int i = 0; i < 10; i++)
        cout << "*";
    cout << endl;
}



int main() {
  // freopen("input.txt", "rt", stdin);
  for (int i = 0; i < 5; i++)
  {
    Print10Stars();
  }
  
  return 0;
}