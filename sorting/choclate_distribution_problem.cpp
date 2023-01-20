#include <iostream>
#include <string>
#include <vector>
#include "./partition and quicksort/quick_sort_lomuto.cpp"
using namespace std;

int choclate_distribution(int arr[], int n, int m)
{
    quick_sort(arr, 0, n - 1);
    int res = arr[m - 1] - arr[0];
    for (int i = 1; i < n - m - 1; i++)
    {
        res = min(res, arr[i + m - 1] - arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 9, 10};
    int n = 7;
    int m = 4;
    // distribute in 3 childern such that childern with max num of choclate and min number of choclate is minimum
    cout << choclate_distribution(arr, n, m);
    return 0;
}
