#include <iostream>
#include <string>
#include <vector>
using namespace std;

void index_first(vector<int> vec, int x)
{
    int low = 0;
    int high = vec.size() - 1;
    while (low <= high)
    {
        /* code */
        int mid = ((high - low) / 2) + low;
        if (vec[mid] == x)
        {
            cout << "Found at index : " << mid << endl;
            break;
        }
        if (x < vec[mid])
        {
            high = mid - 1;
        }
        if (x > vec[mid])
        {
            low = mid + 1;
        }
    }
}

int main()
{
    // your code here
    vector<int> vec = {5, 10, 10, 15, 15};
    index_first(vec, 15);

    return 0;
}
