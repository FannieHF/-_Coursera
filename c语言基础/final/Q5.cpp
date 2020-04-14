#include <iostream>
using namespace std;

// 字符串插入
int main()
{

  char a[10];
  char b[3];
  char result[13];
  while (cin >> a >> b)
  {
    char tmp = 0;
    int tmpIndex = 0;
    for (int i = 0; i < 10; i++)
    {
      if (a[i] == '\0')
        break;
      if (a[i] > tmp)
      {
        tmp = a[i];
        tmpIndex = i;
      }
    }

    for (int i = 0; i < 13; i++)
    {
      if (i <= tmpIndex)
      {
        result[i] = a[i];
      }
      else if (i > tmpIndex && i <= tmpIndex + 3)
      {
        result[i] = b[i - tmpIndex - 1];
      }
      else if (i > tmpIndex + 3)
      {
        result[i] = a[i - 3];
        if (a[i - 3] == '\0')
        {
          cout << result << endl;
          cin.get();
          break;
        }
      }
    }
  }

  return 0;
}