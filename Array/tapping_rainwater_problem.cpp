#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;

    // leftmax
    int lmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }

    // rmax
    int rmax[n];
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }

    // result
    int rainwater = 0;
    for (int i = 1; i < n - 1; i++)
    {
        rainwater += min(lmax[i], rmax[i]) - arr[i];
    }
    cout << "Total rainwater can be stored is : " << rainwater;
    return 0;
}
