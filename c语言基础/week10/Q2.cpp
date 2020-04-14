#include <iostream>
using namespace std;

char strcmp(char s1[], char s2[])
{
  int i = 0;
  char result = '=';
  while (s1[i] != '\0')
  {
    if (s1[i] > 94)
      s1[i] -= 32;
    if (s2[i] > 94)
      s2[i] -= 32;

    if (s1[i] == s2[i])
    {
      i++;
      continue;
    }

    if (s1[i] > s2[i])
    {
      result = '>';
      return result;
    }
    else if (s1[i] < s2[i])
    {
      result = '<';
      return result;
    }
  }

  return result;
}

int main()
{
  const int counts = 80;
  char s1[counts];
  cin.getline(s1, counts);
  char s2[counts];
  cin.getline(s2, counts);
  cout << strcmp(s1, s2) << endl;

  return 0;
}
