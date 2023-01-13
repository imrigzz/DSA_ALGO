#include <iostream>
using namespace std;
// x^n = x*x*x*x*x

//                       x^n
//                  x^n/2   x^n/2                       // if n is even
//  x^n/2   x^n/2  *x        x^n/2   x^n/2  *x          //if n is odd


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
  if (n % 2 == 0)
  {
    return pow_fun(x, n / 2) * pow_fun(x, n / 2);
  }
  else
  {
    return pow_fun(x, n / 2) * pow_fun(x, n / 2) * x;
  }
}

int main()
{
  // code starts from here
  int x = 2, n = 5;
  cout << pow_fun(x, n);
  return 0;
}