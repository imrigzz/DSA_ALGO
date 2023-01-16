#include <iostream>
#include <string>
#include <vector>
#include "merge_function_of_merge_sort.cpp"

using namespace std;

// there is theta(log2(N+1)) levels + at each level theta(N) for merge function
//  Time complexity theta(nlogn)
// space complexity : theta(N) , because at each level left and right array combined size is N only

void merge_sort(vector<int> &vec, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = low + (high - low) / 2;
    merge_sort(vec, low, mid);
    merge_sort(vec, mid + 1, high);
    merge(vec, low, mid, high);
}

int main()
{
    // your code here
    vector<int> vec = {10, 5, 30, 15, 7};
    int low = 0;
    int high = vec.size() - 1;
    merge_sort(vec, low, high);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
