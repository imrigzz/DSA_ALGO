#include <iostream>
#include <string>
#include <vector>
using namespace std;

int last_occurence(vector<int> vec, int x)
{
    int low = 0;
    int high = vec.size() - 1;
    int index;
    while (low <= high)
    {
        int mid = (low + high) / 2;
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
            if (mid == vec.size() - 1 && vec[mid] != vec[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    // your code here
    vector<int> vec = {1};
    int x = 5;
    cout << last_occurence(vec, x);
    return 0;
}
