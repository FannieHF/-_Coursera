#include <iostream>
using namespace std;

int main()
{
  const int counts = 80;
  char s[counts];
  int sum[5] = {0};
  cin.getline(s, counts);
  for (int i = 0; i < counts; i++)
  {
    if (s[i] == 0)
      break;
    switch (s[i])
    {
    case 'a':
      sum[0]++;
      break;
    case 'e':
      sum[1]++;
      break;
    case 'i':
      sum[2]++;
      break;
    case 'o':
      sum[3]++;
      break;
    case 'u':
      sum[4]++;
      break;
    default:
      break;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    cout << sum[i] << ' ';
  }
  return 0;
}