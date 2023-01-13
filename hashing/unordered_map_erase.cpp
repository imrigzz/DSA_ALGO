#include "bits/stdc++.h"
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]].push_back(i);
    }
    // for (auto p : mp)
    // {
    //     cout << p.first << ": ";
    //     while (!p.second.empty())
    //     {
    //         cout << p.second.back() << " ";
    //         p.second.pop_back();
    //     }
    //     cout << endl;
    // }
    for (auto &x : mp)
    {
        int first = x.first;
        int sec = x.second.back();
        cout << "second : " << sec << endl;
        if (!x.second.empty())
        {
            x.second.pop_back();
        }
        auto it = mp.find(target - first);
        if (it != mp.end())
        {
            // it->second.pop_back();
            ans.push_back(sec);
            // mp.erase(it);
            cout << "first is " << first << endl
                 << "second back " << mp[target - first].back() << endl;
            ;
            ans.push_back(mp[target - first].back());
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 3};
    int target = 6;
    vector<int> a;
    a = twoSum(nums, target);
    for (auto x : a)
    {
        cout << x << " ";
    }
    // unordered_map<int, vector<string>> um;
    // um[0].push_back("apple");
    // // um[1].push_back("banana");
    // // um[2].push_back("mango");
    // um[0].push_back("company");

    // for (auto x : um)
    // {
    //     cout << x.first << "  " << x.second.back() << endl;
    // }
    // auto x = um.find(0);
    // x->second.pop_back();

    // for (auto x : um)
    // {
    //     cout << x.first << "  " << x.second.back() << endl;
    // }

    // for (auto x : um)
    // {
    //     if (!x.second.empty())
    //     {
    //         x.second.pop_back();
    //     }

    //     cout << x.first << "  " << x.second.back() << endl;
    // }

    return 0;
}
