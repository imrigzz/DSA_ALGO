#include <iostream>
#include <string>
#include <vector>
using namespace std;

int repeating(vector<int> vec)
{
    int slow = vec[0];
    int fast = vec[0];
    slow = vec[slow];
    fast = vec[vec[fast]];

    // find cycle
    if (slow != fast)
    {
        while (slow != fast)
        {
            slow = vec[slow];
            fast = vec[vec[fast]];
            // cout << slow << " " << fast << endl;
        }
    }

    // find postion by moving pointer1 from meeting point of slow-fast and pointer2 from starting
    slow = vec[0];
    while (slow != fast)
    {
        slow = vec[slow];
        fast = vec[fast];
    }

    return slow;
}

int main()
{
    // your code here
    vector<int> vec = {1, 2, 1};
    cout << repeating(vec);
    return 0;
}
