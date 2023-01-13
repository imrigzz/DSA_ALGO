#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void all_divisor_naive(int n) // IN INCREASING ORDER
{
    for (int i = 1; i * i <= n; i++) // if u want in order divide this for loop into (1 to sqrt(n) and n to sqrt(n))
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " "; // for numbers like 25 were there is two 5
            }
        }
    }
}

// optimised

void all_divisior(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (int i = sqrt(n) + 1; i >= 1; i--)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}
int main()
{
    // your code here
    all_divisor_naive(25);
    cout << endl;
    all_divisior(25);
    return 0;
}
