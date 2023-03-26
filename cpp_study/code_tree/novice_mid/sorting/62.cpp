#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
상품 코드 : 내 풀이
*/

class Product {
  public:
    string name;
    int product_code;

    Product(string name = "codetree", int product_code = 50) {
      this->name = name;
      this->product_code = product_code;
    }
};


int main() {
  freopen("input.txt", "rt", stdin);
  
  Product product[2];
  string name;
  int product_code;
  cin >> name >> product_code;
  product[1] = Product(name, product_code);
  for(int i = 0; i < 2; i++) {
      cout << "product " << product[i].product_code 
        << " is " <<  product[i].name <<'\n'; 
  }
  return 0;
}