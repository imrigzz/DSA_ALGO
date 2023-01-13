#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> um;
    vector<int> vec = {0, 0, 1, 0};
    vector<int> vec1 = {1, 0, 0, 0};
    // 0 1 1 1 1 1 1
    // 0 1 1 1 1 2 2
    int pre_sum = 0, longest = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        pre_sum += vec[i] - vec1[i];
        if (pre_sum == 0)
        {
            longest = i + 1;
        }
        if (um.find(pre_sum) == um.end())
        {
            um.insert({pre_sum, i});
        }
        if (um.find(pre_sum) != um.end())
        {
            int curr_long = i - um[pre_sum];
            longest = max(curr_long, longest);
        }
    }
    cout << longest;
    return 0;
}
