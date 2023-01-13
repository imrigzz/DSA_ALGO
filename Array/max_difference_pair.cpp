#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here

    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    // int arr[] = {2, 3, 10, 6, 4, 8, 1};

    int n = 7;
    int minv = arr[0];
    int res = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minv);
        minv = min(minv, arr[i]);
    }
    cout << res;

    return 0;
}
