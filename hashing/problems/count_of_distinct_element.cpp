#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> arr;
    int n = 0;
    while (cin >> n)
    {
        arr.insert(n);
    }
    cout << arr.size() << endl;

    return 0;
}
