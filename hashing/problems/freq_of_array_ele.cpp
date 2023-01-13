#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> hmap;
    vector<int> vec = {10, 20, 20, 30, 10};
    for (int i = 0; i < vec.size(); i++)
    {
        hmap[vec[i]]++; // this do the below commented operation: find if present and incerement, if not make one with value 0 and increment it;
        // if (hmap.find(vec[i]) != hmap.end())
        // {
        //     hmap[vec[i]] = hmap[vec[i]] + 1;
        // }
        // else
        // {
        //     hmap.insert({vec[i], 1});
        // }
    }
    for (auto it : hmap)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
