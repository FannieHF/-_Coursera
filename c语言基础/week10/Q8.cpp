#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int a[10001] = {0};
  for (int i = 0; i < m; i++)
  {
    int start, end;
    cin >> start >> end;
    for (int j = start; j <= end; j++)
    {
      a[j] = 1;
    }
  }

  int sum = n + 1;
  for (int i = 0; i <= n; i++)
  {
    if (a[i] == 1)
    {
      sum--;
    };
  }

  cout << sum;
  return 0;
}
