#include <iostream>
using namespace std;

// 能被3，5，7整除的数
int main()
{

  int number;
  while (cin >> number)
  {
    char output[3];
    int count = 0;

    if (number % 3 == 0)
    {
      output[count] = '3';
      count++;
    }

    if (number % 5 == 0)
    {
      output[count] = '5';
      count++;
    }

    if (number % 7 == 0)
    {
      output[count] = '7';
      count++;
    }

    if (count == 0)
    {
      cout << 'n' << endl;
    }
    else
    {
      if (count > 1) {
        for (int i = 0; i < count - 1; i++)
        {
          cout << output[i] << ' ';
        }
      } 
      cout << output[count-1] << endl;
    }
  }

  return 0;
}