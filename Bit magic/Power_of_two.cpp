#include <iostream>
#include <string>
#include <vector>
using namespace std;

// to further optimise return (n&(n-1)==0) as ther is only one set bits if(n==0 return false)

bool powTwo(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        count++;
    }
    if (count == 1)
    {
        return true;
    }
    return false;
}

int main()
{
    // your code here
    string x = (powTwo(0) == 1) ? "true" : "False";
    cout << x;
    return 0;
}