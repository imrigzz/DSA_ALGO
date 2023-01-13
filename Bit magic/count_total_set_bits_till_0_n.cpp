#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int countSetBits(int n)
{
    // Your logic here
    n = n + 1;
    int i = 0;
    int count = 0;
    while (pow(2, i) < n)
    {
        int p;
        if (i == 0)
        {
            p = 2;
        }
        else
        {
            p = pow(2, i);
        }

        int n01 = n / p;
        int sbg = n01 / 2;
        int nsb = sbg * p;
        int osb;
        if (sbg % 2 != 0)
        {
            osb = n % p;
        }
        count += (nsb + osb);
        i++;
    }
    return count;
}

int main()
{
    // your code here
    cout << countSetBits(4);

    return 0;
}
