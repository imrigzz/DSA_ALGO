#include "bits/stdc++.h"
using namespace std;

#define INF 1000000000000000003
typedef long long int ll;

void solve()
{
    vector<int> vec = {10, 10, 5, 3, 20, 5};
    int k = 3;
    unordered_map<int, int> us;
    // insert the k elements in map
    for (int i = 0; i < k; i++)
    {
        us[vec[i]] += 1;
    }
    cout << us.size() << endl;
    // print map size
    for (int i = k; i < vec.size(); i++)
    {
        // subtract the first element count by 1, if it becomes zero remove that element
        us[vec[i - k]] -= 1;
        if (us[vec[i - k]] == 0)
        {
            us.erase(vec[i - k]);
        }
        // add new element in map
        us[vec[i]] += 1;
        // print size
        cout << us.size() << endl;
    }
}

int main()
{
    solve();
    return 0;
}
