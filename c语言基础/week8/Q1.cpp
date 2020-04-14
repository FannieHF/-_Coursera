#include <iostream>
using namespace std;

int main()
{
  int a, sum = 0;
  cin >> a;
  for (int i = 0; i < 5; i++)
  {
    int b;
    cin >> b;
    if (b < a)
      sum += b;
  }
  cout << sum << endl;
  return 0;
}