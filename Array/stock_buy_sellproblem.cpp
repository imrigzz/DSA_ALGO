#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int arr[] = {1, 5, 3, 4, 12};
    // int arr[] = {10, 5, 4, 3, 2, 1};
    int profit = 0;
    // efficient
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    cout << profit;
    return 0;
}
