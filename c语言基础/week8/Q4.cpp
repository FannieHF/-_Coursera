#include <iostream>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  bool result = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] + a[j] == k)
      {
        result = 1;
        break;
        break;
      }
    }
  }

  if (result)
    cout << "yes" << endl;
  else
    cout << "no" << endl;

  return 0;
}