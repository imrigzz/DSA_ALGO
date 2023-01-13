#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// to return max number pieces can rope be cut

int ropecut(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res = max(ropecut(n - a, a, b, c), max(ropecut(n - b, a, b, c), ropecut(n - c, a, b, c)));
    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main()
{
    // your code here
    cout << ropecut(23, 11, 9, 12);
    return 0;
}