#include "bits/stdc++.h"
using namespace std;

#define INF 1000000000000000003
typedef long long int ll;

int main()
{
    vector<int> arr = {1, 2, 4, 7};
    unordered_set<int> prefix_summ;
    int sum = 0, ans = 3;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == ans)
        { // inintial condition
            cout << "yes";
            break;
        }
        if (prefix_summ.find(sum - ans) != prefix_summ.end())
        {
            cout << "yes";
            break;
        }
        else
        {
            prefix_summ.insert(sum);
        }
    }

    return 0;
}
