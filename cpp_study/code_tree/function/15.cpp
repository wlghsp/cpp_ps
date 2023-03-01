#include <iostream>
using namespace std;

int arithmetic(int a, int b, char op){
    int result = 0;
    switch (op)
    {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '/':
      result = a / b;
      break;
    case '*':
      result = a * b;
      break;

    default:
      break;
    }
    return result;
}



int main()
{ 
  freopen("input.txt", "rt", stdin);
  int a, b;
  char op;
  cin >> a >> op >> b;
  
  if (op != '+' && op != '-' && op != '/' && op != '*')
  {
    cout << "False";
  } else {
    cout << a << " " << op << " " << b << " = " << arithmetic(a, b, op);
  }
  return 0;
}