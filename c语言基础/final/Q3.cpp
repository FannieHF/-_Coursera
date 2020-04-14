#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 最远距离
int main()
{

  int n;
  cin >> n;
  double matrix[n][2];

  for (int i = 0; i < n; i++)
  {
    cin >> matrix[i][0] >> matrix[i][1];
  }

  double dist = 0.0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      double tmp = sqrt(pow(matrix[i][0] - matrix[j][0], 2) + pow(matrix[i][1] - matrix[j][1], 2));
      if (tmp > dist)
        dist = tmp;
    }
  }

  cout << fixed << setprecision(4) << dist << endl;

  return 0;
}