#include <iostream>
using namespace std;

void print_num(int n)
{
  if (n == 0)
  {
    return;
  }
  print_num(n - 1);
  cout << n << endl;
}

int main()
{
  // code starts from here
  int n = 5, pos = 0;
  print_num(n);
  return 0;
}