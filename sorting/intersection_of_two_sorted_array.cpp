#include <iostream>
#include <string>
#include <vector>
using namespace std;

// simalar approach as merge function

void intersection(int arr[], int arr1[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        if (arr[i] < arr1[j])
        {
            i++;
        }
        else if (arr[i] > arr1[j])
        {
            j++;
        }
        else
        {
            // if equal
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    // your code here
    int arr[] = {20, 20, 30, 40, 60};
    int arr1[] = {20, 20, 20, 40};
    intersection(arr, arr1, 5, 4);

    return 0;
}
