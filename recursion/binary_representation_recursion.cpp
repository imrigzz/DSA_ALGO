#include <iostream>
#include <string>
#include <vector>
using namespace std;

void to_binary(int n)
{
    if (n == 0)
    {
        return;
    }
    to_binary(n / 2);
    cout << n % 2 << " ";
}

int main()
{
    // your code here
    to_binary(4);
    return 0;
}
