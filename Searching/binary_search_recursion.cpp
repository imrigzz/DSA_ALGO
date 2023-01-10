#include <iostream>
#include <string>
#include <vector>
using namespace std;

int binary_search_recursive(vector<int> vec, int i, int j, int x)
{
    if (i > j)
    {
        return -1;
    }
    int mid = ((j - i) / 2) + i;
    // cout << "mid is : " << mid << " vec[mid] : " << vec[mid] << endl;
    if (vec[mid] == x)
    {
        return mid;
    }
    else if (vec[mid] > x)
    {
        return binary_search_recursive(vec, i, mid - 1, x);
    }
    else
    {
        return binary_search_recursive(vec, mid + 1, j, x);
    }
}

int main()
{
    // your code here
    vector<int> vec = {10, 20, 30, 40, 50, 60};
    int x = 20;
    int n = vec.size() - 1;
    // cout << n << endl;
    cout << binary_search_recursive(vec, 0, n, x);

    return 0;
}
