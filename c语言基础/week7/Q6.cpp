#include <iostream>
using namespace std;

int main()
{
  int total;
  cin >> total;
  int money[] = {100, 50, 20, 10, 5, 1};

  for (int i = 0; i < 6; i++)
  {
    if (total >= money[i])
    {
      int amount = total / money[i];
      cout << amount << endl;
      total -= amount * money[i];
    }
    else
    {
      cout << 0 << endl;
    }
  }
  return 0;
}