#include <iostream>
#include <string>
#include <vector>
using namespace std;

void insertion_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int currEle = arr[i];
        int j = i - 1;
        while (j >= 0 && currEle < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currEle;
    }
}

int main()
{
    // your code here
    int arr[] = {2, 6, 4, 1, 5};
    insertion_sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
