#include <iostream>
#include <string>
#include <vector>
using namespace std;

int count_ones(vector<int> vec)
{
    // find first occurrence of 1 in array of sorted 0,1
    int low = 0, high = vec.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (vec[mid] < 1)
        {
            low = mid + 1;
        }
        else if (vec[mid] > 1)
        {
            high = mid - 1;
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

int main()
{
    // your code here
    vector<int> vec = {0, 0, 0, 0, 1, 1, 1};
    int first = count_ones(vec);
    // cout << first << endl;
    if (first == -1)
    {
        cout << "count of 1s " << 0;
    }
    else
    {
        cout << "count of 1s " << vec.size() - count_ones(vec);
    }

    return 0;
}
