#include <iostream>
using namespace std;

int main()
{
  long reversed = 0, digit;
  int x = 123;
  while (x != 0)
  {
    digit = x % 10;
    reversed = reversed * 10 + digit;
    x = x / 10;
    if (reversed >= INT32_MAX || reversed <= INT32_MIN)
    {
      reversed = 0;
    }
  }
  cout<<reversed<<endl;
}