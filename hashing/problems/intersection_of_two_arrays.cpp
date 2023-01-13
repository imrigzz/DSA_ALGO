#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    // your code here
    //  10 20 30 30 50
    //  40 50 30 30 60
    //  2
    // time complexity O(m+n)

    unordered_set<int> intersect;
    vector<int> v1 = {10, 20, 30, 30, 50};
    vector<int> v2 = {40, 50, 30, 30, 10};
    // insert array  1 into unordered_set
    for (int i = 0; i < v1.size(); i++)
    {
        intersect.insert(v1[i]);
    }
    // find next array 2 element in unordered_set
    //  and if found increment the no_of_interset
    //  and erase that value in unordered_set
    int no_of_intersect = 0;
    for (int i = 0; i < v2.size(); i++)
    {
        if (intersect.find(v2[i]) != intersect.end())
        {
            no_of_intersect++;
            intersect.erase(v2[i]);
        }
    }
    cout << no_of_intersect << endl;

    return 0;
}
