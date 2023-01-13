#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 5; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // your code here
    int n = 2;
    cout << isprime(n) << endl;
    return 0;
}
