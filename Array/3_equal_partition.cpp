#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> vec = {1, 3, 4, 0, 4};
    int total = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        total += vec[i];
    }

    if (total % 3 != 0)
    {
        cout << "-1";
        return 0;
    }

    int s1 = total / 3, s2 = 2 * s1;
    int i1, i2, i3;
    vector<int> prefix;
    prefix.push_back(vec[0]);
    for (int i = 1; i < vec.size() - 1; i++)
    {
        prefix.push_back(vec[i] + prefix[i - 1]);
        if (prefix[i] == s1)
        {
            i1 = i;
            cout << "subarray 1: 0 - " << i1 << endl;
        }
        if (prefix[i] == s2)
        {
            i2 = i;
            cout << "subarray 2: " << i1 + 1 << " - " << i2 << endl;
        }
    }
    cout << "subarray 3: " << i2 + 1 << " - " << vec.size() - 1 << endl;

    return 0;
}
