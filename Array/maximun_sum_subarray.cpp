#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> vec = {5, 2, -3, 4};
    // simple
    int res = vec[0];
    int maxEnding = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        maxEnding = max(maxEnding + vec[i], vec[i]);
        res = max(res, maxEnding);
    }
    cout << res;
    return 0;
}
