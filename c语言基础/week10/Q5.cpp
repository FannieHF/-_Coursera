#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int size = 0;
  cin >> size;
  int a[size][size];
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cin >> a[i][j];
    }
  }

  int count = 0;
  for (int i = 1; i < size - 1; i++)
  {
    for (int j = 1; j < size - 1; j++)
    {
      int tmp = a[i][j] + 50;
      if (tmp <= 255 && tmp <= a[i - 1][j] && tmp <= a[i + 1][j] && tmp <= a[i][j - 1] && tmp <= a[i][j + 1])
      {
        count++;
      };
    }
  }

  cout << count << endl;

  return 0;
}
