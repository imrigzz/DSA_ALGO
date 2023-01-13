#include <iostream>
using namespace std;
// x^n = x*x*x*x*x
int pow_fun(int x, int n)
{
  if (x == 0)
  {
    return 0;
  }
  if (n == 0)
  {
    return 1;
  }
  return x * pow_fun(x, n - 1);
}

int main()
{
  // code starts from here
  int x = 0, n = 10;
  cout << pow_fun(x, n);
  return 0;
}