#include <iostream>
#include <string>
#include <vector>
#include "hoare_partition.cpp"
using namespace std;

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = hoare_partition(arr, low, high);
        quick_sort(arr, low, p);
        quick_sort(arr, p + 1, high);
    }
}

int main()
{
    int arr[] = {4, 7, 3, 1, 9, 5};
    int low = 0, high = 5;
    quick_sort(arr, low, high);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
