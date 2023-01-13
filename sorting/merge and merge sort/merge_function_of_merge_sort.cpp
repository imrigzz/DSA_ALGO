#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> left;
    vector<int> right;
    for (int i = low; i <= mid; i++)
    {
        left.push_back(v[i]);
    }
    for (int i = mid + 1; i <= high; i++)
    {
        right.push_back(v[i]);
    }

    int i = 0, j = 0;
    int k = low;

    while (i < (mid - low + 1) && j < (high - mid))
    {
        if (left[i] < right[j])
        {
            v[k] = left[i];
            i++;
            k++;
        }
        else
        {
            v[k] = right[j];
            j++;
            k++;
        }
    }

    while (i < mid - low + 1)
    {
        v[k] = left[i];
        i++;
        k++;
    }
    while (j < high - mid)
    {
        v[k] = right[j];
        j++;
        k++;
    }
}

// int main()
// {
//     // given array with low mid high where low-mid and mid+1 - high
//     // are sorted
//     // merge it now
//     int low = 0, mid = 3, high = 6;
//     vector<int> vec = {10, 15, 20, 40, 8, 11, 55};
//     merge(vec, low, mid, high);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << " ";
//     }
//     return 0;
// }
