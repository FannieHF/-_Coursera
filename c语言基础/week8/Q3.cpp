#include <iostream>
#include <cmath>
using namespace std;

bool canBuy(int year, int salary, double interest)
{
  int amount = year * salary;
  float price = 200 * pow(1 + interest, year - 1);
  return (amount >= price);
}

int main()
{
  int n;
  float k;
  bool result = 0;
  while (cin >> n >> k)
  {
    k /= 100;

    for (int i = 1; i <= 20; i++)
    {
      result = canBuy(i, n, k);
      if (result)
      {
        cout << i << endl;
        break;
      }
    }
    if (!result)
    {
      cout << "Impossible" << endl;
    }
  }

  return 0;
}