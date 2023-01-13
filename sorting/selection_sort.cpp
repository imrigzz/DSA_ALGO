#include <iostream>
#include <string>
#include <vector>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    // your code here
    int arr[] = {2, 6, 4, 1, 5};
    selection_sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
