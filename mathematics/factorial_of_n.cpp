#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}

int main()
{
    int n, res = 1;
    n = 4;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    cout << res << endl;

    cout << "By recursion: " << endl;
    cout << fac(4);
    return 0;
}
