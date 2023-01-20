#include <iostream>
#include <string>
#include <vector>
#include "./partition and quicksort/lomuto_partition.cpp"
using namespace std;

// quick sort partition based approach
int kth_smallest(int arr[], int n, int k)
{
    // lomuto approach + binary search
    int i = 0, j = n - 1;
    while (i <= j)
    {
        int p = lomuto_partition(arr, i, j);
        if (p == k - 1)
        {
            return arr[p];
        }
        else if (k - 1 < p)
        {
            j = p - 1;
        }
        else
        {
            i = p + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 3, 6, 1, 9, 2};
    int k = 1;
    // to make kth largest program
    // just convert k position to n-k;
    int n = 6;
    // k = n - k + 1;
    cout << kth_smallest(arr, n, k);
    return 0;
}
