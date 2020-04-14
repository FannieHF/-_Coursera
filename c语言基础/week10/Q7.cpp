#include <iostream>
#include <cmath>
using namespace std;

int quickSort(int n, int a[], int pos)
{
  int compare = a[0];
  int left[n], right[n];
  int leftNum = 0, rightNum = 0;

  for (int i = 1; i < n; i++)
  {
    if (compare < a[i])
    {
      right[rightNum] = a[i];
      rightNum++;
    }
    else if (compare >= a[i])
    {
      left[leftNum] = a[i];
      leftNum++;
    }
  }

  if (pos == leftNum)
  {
    return compare;
  }
  else if (leftNum > pos)
  {
    return quickSort(leftNum, left, pos);
  }
  else if (leftNum < pos)
  {
    return quickSort(rightNum, right, pos - leftNum - 1);
  }
  return 0;
}

int main()
{
  int n;
  cin >> n;
  while (n != 0)
  {
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    int sum = quickSort(n, a, ceil(n / 2));
    if (n % 2 == 0)
    {
      sum += quickSort(n, a, ceil(n / 2) - 1);
      sum = ceil(sum / 2);
    }
    cout << sum << endl;
    cin >> n;
  }

  return 0;
}