#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2)
{
    int i = 0, j = 0;
    int min_size = min(v1.size(), v2.size());
    vector<int> res;

    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            res.push_back(v1[i]);
            i++;
        }
        else
        {
            res.push_back(v2[j]);
            j++;
        }
    }

    while (i < v1.size())
    {
        res.push_back(v1[i]);
        i++;
    }
    while (j < v2.size())
    {
        res.push_back(v2[j]);
        j++;
    }
    return res;
}

int main()
{
    // your code here
    vector<int> v1 = {10, 15, 20, 20};
    vector<int> v2 = {1, 12};
    vector<int> vec;
    vec = merge(v1, v2);

    for (int x : vec)
    {
        cout << x << " ";
    }

    return 0;
}
