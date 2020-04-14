#include <iostream>
using namespace std;

int main()
{
  const int counts = 500;
  char s1[counts];
  cin.getline(s1, counts);

  int size = 0;
  int max = 0;
  int wordEnd = 0;
  int i = 0;
  do
  {
    if (s1[i] == 32 || s1[i] == '.')
    {
      if (max < size)
      {
        max = size;
        wordEnd = i;
      }
      size = 0;
    }
    else
    {
      size++;
    }
    i++;
  } while (s1[i] != 0);

  for (int j = wordEnd - max; j < wordEnd; j++)
  {
    cout << s1[j];
  }
  return 0;
}
