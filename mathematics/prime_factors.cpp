#include <iostream>
#include <string>
#include <vector>
using namespace std;

// naive

bool isprime_naive(int n)
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

void prime_fac_naive(int x)
{
    for (int i = 2; i <= x; i++) // all numbers
    {
        if (isprime_naive(i)) // only primes
        {
            int res = x;
            while (res % i == 0) // if prime is factor of n
            {
                cout << i << " ";
                res = res / i; // how many times prime divide n
            }
        }
    }
}

// optimised
void prime_fac(int x)
{
    for (int i = 2; i * i <= x; i++) // all numbers  complexity O(sqrt(x))
    {
        while (x % i == 0) // if prime is factor of n
        {
            cout << i << " ";
            x = x / i; // how many times prime divide n
        }
    }
    if (x > 1)
    {
        cout << x << endl; // if the last prime number is ie x brcame 7 and i=3 then I++ = 4, 4*4=16 , so  missed 7. eg 84
    }
}

int main()
{
    // your code here
    prime_fac_naive(84);
    cout << endl;
    prime_fac(84);

    return 0;
}
