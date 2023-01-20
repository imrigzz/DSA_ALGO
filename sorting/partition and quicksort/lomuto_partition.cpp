#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lomuto_partition(int arr[], int low, int high)
{
    int i = low - 1;
    int j = low;
    int pivot = arr[high];

    for (j; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// int main()
// {
//     int arr[] = {3, 5, 2, 9, 4, 1, 7}; //{10, 80, 30, 90, 40, 50, 70};
//     int low = 0, high = 6;
//     lomuto_partition(arr, low, high);

//     for (int i = 0; i < 7; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
