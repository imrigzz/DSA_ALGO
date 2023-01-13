#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    // your code here
    vector<int> vec = {1, 3, 4, 5, 3, 0, 6, 10};

    // naive solution  =>> O(nlogn)
    // sort(vec.begin(), vec.end());
    // int longest = 0, current = 1;
    // for (int i = 1; i < vec.size(); i++)
    // {
    //     if (vec[i] - vec[i - 1] == 0)
    //     {
    //         continue;
    //     }
    //     if (vec[i] - vec[i - 1] == 1)
    //     {
    //         current += 1;
    //     }
    //     else
    //     {
    //         longest = max(longest, current);
    //         current = 1;
    //     }
    // }
    // cout << longest;

    // hashing method // O(n)
    unordered_set<int> us;
    for (int i = 0; i < vec.size(); i++)
    {
        us.insert(vec[i]);
    }

    for (int i = 0; i < us.size(); i++)
    {
    }

    return 0;
}
