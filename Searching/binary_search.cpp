#include <iostream>
#include <string>
#include <vector>
using namespace std;

int binary_search_iterative(vector<int> vec, int x)
{
    int left, right, mid;
    left = 0;
    right = vec.size() - 1;

    while (left <= right)
    {
        mid = ((right - left) / 2) + left;
        if (vec[mid] == x)
        {
            return mid;
        }
        if (x < vec[mid])
        {
            right = mid - 1;
        }
        if (x > vec[mid])
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // your code here
    vector<int> vec = {10, 20, 30, 40, 50, 60};
    int x = 20;
    cout << binary_search_iterative(vec, x);
    return 0;
}
