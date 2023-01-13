#include <iostream>
#include <string>
#include <vector>
using namespace std;

void power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            // bit is 1
            res *= x;
        }
        // bit is 0
        x = x * x;
        n = n / 2;
    }
    cout << res;
}

int main()
{
    // your code here
    int x = 2, n = 10;
    power(x, n);
    return 0;
}
