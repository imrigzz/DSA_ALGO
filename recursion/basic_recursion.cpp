#include <iostream>
#include <string>
#include <vector>
using namespace std;

void rec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    rec(n - 1);
    cout << n << endl;
}

int main()
{
    // your code here
    rec(3);
    return 0;
}
