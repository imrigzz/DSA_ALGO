#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int res = 0;
    while (x > 0)
    {
        if (x > 0)
        {
            x = x / 10;
            res++;
        }
    }
    cout << res;

    return 0;
}
