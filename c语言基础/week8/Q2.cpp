#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    double a = 0;
    cin >> a;
    double bike = 23 + 27, walk = 0;
    bike += a / 3;
    walk += a / 1.2;
    if (bike > walk)
    {
      cout << "Walk" << endl;
    }
    else if (bike < walk)
    {
      cout << "Bike" << endl;
    }
    else
    {
      cout << "All" << endl;
    }
  }
  return 0;
}