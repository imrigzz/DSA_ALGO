#include <iostream>
using namespace std;
// 3! = 3*2!
// 2! = 2*1!
// 1! = 1

int fac(int n)
{
  if (n == 1 || n == 0)
  {
    return 1;
  }
  return n * fac(n - 1);
}

int main()
{
  // code starts from here
  int n, t;
  cout << "Enter the no of times program will run: ";
  cin >> t;
  while (t--)
  {
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial of " << n << " : " << fac(n) << endl;
  }

  return 0;
}