#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int n = 12321;
    int x = n;
    int y = 0;
    int res = 0;

    while (x > 0)
    {
        y = x % 10;
        x = x / 10;
        res = res * 10 + y;
    }
    if (res == n)
    {
        cout << " Number : " << n << "\n Reverse: " << res << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
