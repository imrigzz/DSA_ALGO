#include <iostream>
#include <string>
#include <vector>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        return ((jos(n - 1, k) + k) % n);
    }
}

int main()
{
    // your code here
    cout << jos(4, 2);
    return 0;
}
