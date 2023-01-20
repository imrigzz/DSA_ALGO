#include <iostream>
#include <string>
#include <vector>
#include "lomuto_partition.cpp"
using namespace std;

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = lomuto_partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

// int main()
// {
//     int arr[] = {1, 2, 5, 8, 3, 4};
//     int size = sizeof(arr) / sizeof(arr[1]);
//     quick_sort(arr, 0, size - 1);

//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
