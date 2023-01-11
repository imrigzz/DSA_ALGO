#include <iostream>
#include <string>
#include <vector>
using namespace std;

int find_rotated(vector<int> vec, int x)
{
    int low = 0;
    int high = vec.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == vec[mid])
        {
            return mid;
        }
        if (vec[low] < vec[mid])
        {
            // left
            if (x >= vec[low] && x < vec[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (x > vec[mid] && x <= vec[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    // your code here
    vector<int> vec = {100, 200, 500, 1000, 3000, 10, 20};
    cout << find_rotated(vec, 20);
    return 0;
}
