#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int m, n;
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i <= floor(n / 2.0); i++)
  {
    int tmp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = tmp;
  }

  for (int i = 0; i < floor(m / 2.0); i++)
  {
    int tmp = a[i];
    a[i] = a[m - i - 1];
    a[m - i - 1] = tmp;
  }
  for (int i = 0; i < floor((n - m) / 2.0); i++)
  {
    int tmp = a[m + i];
    a[m + i] = a[n - i - 1];
    a[n - i - 1] = tmp;
  }

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << ' ';
  }

  return 0;
}
