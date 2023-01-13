#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Defined in algorithm module
// sort(arr,arr+size)
// sort(vec.begin(),vec.end())
// sort(vec.begin(),vec.end(),greater<int>()) descending order

int main()
{
    // your co de here
    int arr[] = {1, 8, 9, 3, 4, 2, 7, 6};
    sort(arr, arr + 8);
    vector<int> vec = {1, 8, 9, 3, 4, 2, 7, 6};
    sort(vec.begin(), vec.end(), greater<int>());

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " " << vec[i] << endl;
    }

    return 0;
}
