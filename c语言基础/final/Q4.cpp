#include <iostream>
using namespace std;

// 简单计算器
int main()
{
  int a, b;
  char c[10];
  cin >> a >> b;
  cin.get();
  cin.getline(c, 10);

  switch (c[0])
  {
  case '+':
    cout << a + b;
    break;
  case '-':
    cout << a - b;
    break;
  case '*':
    cout << a * b;
    break;
  case '/':
    if (b == 0)
    {
      cout << "Divided by zero!" << endl;
    }
    else
    {
      cout << a / b;
    }
    break;
  default:
    cout << "Invalid operator!";
    break;
  }

  return 0;
}