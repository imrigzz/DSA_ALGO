#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    // to find the no of unique elements in two arrays union

    vector<int> v1 = {10, 20, 30, 30, 50};
    vector<int> v2 = {40, 50, 30, 30, 60};
    unordered_set<int> unique(v1.begin(), v1.end());
    unique.insert(v2.begin(), v2.end());
    cout << unique.size();

    return 0;
}
