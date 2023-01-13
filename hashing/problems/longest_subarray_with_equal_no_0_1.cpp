#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
// equal no of 0 and 1 means sum equal all = 0
int main()
{
    vector<int> vec = {1, 0, 1, 0, 1, 1, 0};
    unordered_map<int, int> um;
    int pre_sum = 0;
    int longest = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            pre_sum += -1;
        }
        else
        {
            pre_sum += vec[i];
        }

        if (pre_sum == 0)
        {
            longest = i + 1;
        }
        if (um.find(pre_sum - 0) == um.end())
        { // if prefix sum not found then insert
            um.insert({pre_sum, i});
        }
        else
        {
            int sub_len = i - um[pre_sum - 0];
            longest = max(longest, sub_len);
        }
    }
    cout << longest;
    return 0;
}
