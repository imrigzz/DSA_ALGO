#include <iostream>
#include <string>
#include <vector>
using namespace std;

int hoare_partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int j = high + 1;
    int i = low - 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            // cout << "You will have all the samaller elements than pivot on left side of index(index included) : " << j << endl
            //      << "You will have all the greater or equal elements than pivot on right side of index(index excluded) : " << j << endl;
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

// int main()
// {
//     int arr[] = {3, 2, 5, 1, 7, 4};
//     int low = 0, high = 5;
//     hoare_partition(arr, low, high);

//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
