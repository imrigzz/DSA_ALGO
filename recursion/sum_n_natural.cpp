#include <iostream>
using namespace std;

void sum(int i, int n, int s)
{
  if (i == n)
  {
    s += i;
    cout << s << endl;
    return;
  }
  s += i;
  sum(i + 1, n, s);
}

int main()
{
  // code starts from here
  int i = 1, n = 5, s = 0;
  sum(i, n, s);
  return 0;
}