#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  char a[5][5] = {0};
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> a[i][j];
    }
  }
  int m, n;
  cin >> m >> n;
  if (m > 4 || m < 0 || n > 4 || n < 0)
    cout << "error" << endl;
  else
  {
    for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        int row = i;
        if (i == m)
          row = n;
        if (i == n)
          row = m;
        cout << setw(4) << a[row][j];
      }
      cout << endl;
    }
  }

  return 0;
}
