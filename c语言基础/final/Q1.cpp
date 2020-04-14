#include <iostream>
using namespace std;

// 判断闰年
int main()
{
  int year;
  cin >> year;

  if (year % 3200 == 0)
  {
    cout << 'N' << endl;
  }
  else if (year % 400 == 0)
  {
    cout << 'Y' << endl;
  }
  else if (year % 4 == 0 && year % 100 != 0)
  {
    cout << 'Y' << endl;
  }
  else
  {
    cout << 'N' << endl;
  }
  return 0;
}