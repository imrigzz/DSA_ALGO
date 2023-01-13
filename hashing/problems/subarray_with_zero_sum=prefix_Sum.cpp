#include "bits/stdc++.h"
using namespace std;

#define INF 1000000000000000003
typedef long long int ll;

// used prefix sum and unordered set
// array [4,-3,2,1]
// prefix sum  [4,1,3,4] iserted in the unordered_Set
// while inserting find if it is already present?
// if yes, subarray with sum zero is found

int main()
{
    vector<int> arr = {4, -3, 2, 1};
    unordered_set<int> prefix_summ;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
        { // inintial condition
            cout << "yes";
        }
        if (prefix_summ.find(sum - 0) != prefix_summ.end())
        {
            cout << "yes";
        }
        else
        {
            prefix_summ.insert(sum);
        }
    }
    return 0;
}
