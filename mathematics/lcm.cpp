#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lcm_naive(int a, int b)
{
    if (a % b == 0)
    {
        return a;
    }
    else if (b % a == 0)
    {
        return b;
    }
    else
    {
        int res = max(a, b);
        while (true)
        {
            if (res % a == 0 && res % b == 0)
            {
                return res;
            }
            res++;
        }
    }
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

int lcm_opt(int a, int b)
{
    return (a * b) / gcd_rec(a, b);
}

int main()
{
    // your code here
    int a = 4, b = 6;
    cout << "Lcm naive: " << lcm_naive(a, b) << endl;
    cout << "Lcm optimised: " << lcm_opt(a, b) << endl;
    cout << "a*b = gcd(a,b) * lcm(a,b) \n"
         << a * b << " = " << gcd_rec(a, b) << " * "
         << " lcm(a,b)" << endl;
    return 0;
}
