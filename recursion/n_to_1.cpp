#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printall(int n)
{
    if (n < 0)
    {
        return;
    }
    printall(n - 1);
    cout << n << endl;
}

int main()
{
    // your code here
    printall(100);
    return 0;
}
