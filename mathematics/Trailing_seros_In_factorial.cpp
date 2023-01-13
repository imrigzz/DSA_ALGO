#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n = 5, r = 1, count = 0;
    for (int i = 2; i <= n; i++)
    {
        r = r * i;
    }

    while (true)
    {
        int x = r % 10;
        if (x == 0)
        {
            count++;
            r = r / 10;
        }
        else
        {
            break;
        }
    }
    cout << count;

    return 0;
}
