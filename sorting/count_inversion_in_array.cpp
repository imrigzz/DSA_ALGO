#include <iostream>
#include <string>
#include <vector>
using namespace std;

// inversion: if greater elements appear before smaller element
// if arr[i]>arr[i+1] and i<i+1
//       or
// if arr[i]>arr[j] and i<j
// [2,4,1,3,5,] => (2,1), (4,1), (4,3)
// SIMILAR TO MERGE SORT

//  concept split into left and right
// while merging if(left[i] < right[i] simply add to new sorted arr from left and continue)
//  else { add to new array from right but additionally res = res+(left_array_size - counter for left_array)}

int count_merge(int arr[], int l, int m, int r)
{
    int left_size = m - l + 1;
    int right_size = r - m;
    int *left = new int[left_size];
    int *right = new int[right_size];

    for (int i = 0; i < left_size; i++)
    {
        left[i] = arr[i + l];
    }
    for (int i = 0; i < right_size; i++)
    {
        right[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0;
    int k = l;
    int res = 0;
    while (i < left_size && j < right_size)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
            res = res + (left_size - i);
        }
    }
    return res;
}

int count_inversion(int arr[], int l, int r)
{
    int res = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        res = count_inversion(arr, l, mid) + count_inversion(arr, mid + 1, r) + count_merge(arr, l, mid, r);
    }
    return res;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int l = 0;
    int r = 4;
    cout << count_inversion(arr, l, r);
    return 0;
}
