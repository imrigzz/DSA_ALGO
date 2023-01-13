#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int x = 6;
    int count = 0;

    while (x > 0)
    {
        if (x % 2 == 1)
        {
            count++;
        }
        x = x / 2;
    }
    cout << count;

    // Better approach Brain Kerigannam's Algorithm: keep making last set bit zero
    x = 6;
    int res = 0;
    while (x > 0)
    {
        x = (x & (x - 1));
        res++;
    }
    cout << endl
         << res;
    return 0;
}
