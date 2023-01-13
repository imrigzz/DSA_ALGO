#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dr(int n)
{
    // Your code here
    if ((n / 10) <= 0)
    {
        return n;
    }

    int x = 0;
    while (n > 0)
    {
        x += n % 10;
        n = n / 10;
    }
    dr(x);
}
int main()
{
    // your code here
    cout << dr(1);
    // int n = 9;
    // cout << 9 / 10;
    return 0;
}
