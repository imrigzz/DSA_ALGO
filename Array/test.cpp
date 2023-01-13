#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n)
{
    // code here
    vector<int> lmax, rmax;
    lmax.push_back(arr[0]);
    rmax.push_back(arr[n - 1]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > lmax[i - 1])
        {
            lmax.push_back(arr[i]);
        }
        else
        {
            lmax.push_back(lmax[i - 1]);
        }
        if (arr[n - 1 - i] > rmax[n - i])
        {
            rmax.push_back(arr[n - 1 - i]);
        }
        else
        {
            rmax.push_back(rmax[n - i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << lmax[i] << " " << rmax[i] << endl;
    }

    reverse(rmax.begin(), rmax.end());
    long long res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}

int main()
{
    // your code here
    int arr[] = {7, 4, 0, 9};
    cout << trappingWater(arr, 4);
    return 0;
}
