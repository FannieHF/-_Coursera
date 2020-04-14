#include <iostream>
using namespace std;

int main()
{
  int n, k;
  cin >> n;
  cin >> k;
  int a[k];

  for (int i; i < n; i++)
  {
    if (i < k)
    {
      cin >> a[i];
    }
    else
    {
      int minIndx = -1;
      int min, tmp;
      cin >> tmp;
      min = tmp;
      for (int j = 0; j < k; j++)
      {
        if (a[j] < min)
        {
          min = a[j];
          minIndx = j;
        }
      }
      if (min != tmp)
      {
        a[minIndx] = tmp;
      }
    }
  }

  // find max
  int min = a[0];
  for (int j = 0; j < k; j++)
  {
    if (a[j] < min)
    {
      min = a[j];
    }
  }
  cout << min;
  return 0;
}