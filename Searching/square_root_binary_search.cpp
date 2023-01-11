#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 1,2,3,4,5,6,7,8
int square_root(int x)
{
    int low = 1;
    int high = x;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int root = mid * mid;
        if (root == x)
        {
            return mid;
        }
        else if (root > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    // your code here
    int x = 1000;
    cout << square_root(x);
    return 0;
}
