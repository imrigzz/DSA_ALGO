#include "bits/stdc++.h"
using namespace std;

#define INF 1000000000000000003
typedef long long int ll;

int main()
{
    vector<int> vec = {8, 3, 17}; //{2, 3, 1};  // //
    unordered_map<int, int> ps;

    int pre = 0, sum = 28, longest = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        pre += vec[i];
        if (pre == sum)
        {
            longest = i + 1;
        }
        if (ps.find(pre) == ps.end()) // if not in prefix_sum then insert in  unordered map
        {
            ps.insert({pre, i});
        }
        if (ps.find(pre - sum) != ps.end()) // if present in prefix sun then find subarray length and compare with longest
        {
            int sub_arr_len = i - ps[pre - sum];
            longest = max(longest, sub_arr_len);
        }
    }
    cout << longest;

    return 0;
}
