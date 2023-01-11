#include <iostream>
#include <string>
#include <vector>
using namespace std;

int binary_search(vector<int> vec, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (vec[mid] == x)
        {
            return mid;
        }
        else if (x < vec[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int infinite_search(vector<int> vec, int x)
{
    if (vec[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (vec[i] <= x)
    {
        if (vec[i] == x)
        {
            return i;
        }
        i *= 2;
    }
    cout << "range : " << (i / 2) + 1 << "  " << i - 1 << endl;
    return binary_search(vec, (i / 2) + 1, i - 1, x);
}

int main()
{
    // your code here
    vector<int> vec = {11, 25, 31, 40, 56, 62, 78, 81, 90, 109, 111, 123};
    cout << infinite_search(vec, 81);
    return 0;
}
