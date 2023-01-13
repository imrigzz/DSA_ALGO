#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gcd_naive(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

int gcd_loop(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int gcd_rec(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd_rec(b, a % b);
    }
}

int main()
{
    int a, b;
    a = 4;
    b = 6;
    cout << "Gcd naive: " << gcd_naive(a, b) << endl;
    cout << "Gcd loop: " << gcd_loop(a, b) << endl;
    cout << "Gcd rec: " << gcd_rec(a, b) << endl;
    return 0;
}
