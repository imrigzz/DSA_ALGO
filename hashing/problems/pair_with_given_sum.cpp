#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

// if array is unsorted
int main()
{
    // your code here
    vector<int> vec = {11, 5, 6};
    int sum = 10;

    unordered_set<int> s(vec.begin(), vec.end());
    for (int i = 0; i < s.size(); i++)
    {
        s.erase(vec[i]);
        if (s.find(sum - vec[i]) != s.end())
        {
            cout << "yes" << endl;
            return 0;
        }
        s.insert(vec[i]);
    }
    cout << "No" << endl;
    return 0;
}
