#include <iostream>
#include <string>
#include <vector>
using namespace std;

int index_first(vector<int> vec, int x)
{
    int low = 0;
    int high = vec.size() - 1;
    while (low <= high)
    {
        /* code */
        int mid = ((high - low) / 2) + low;
        if (x < vec[mid])
        {
            high = mid - 1;
        }
        else if (x > vec[mid])
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || vec[mid] != vec[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

// int main()
// {
//     // your code here
//     vector<int> vec = {10, 20, 20, 20, 40, 40};
//     cout << index_first(vec, 20);

//     return 0;
// }
