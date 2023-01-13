#include <iostream>
#include <string>
#include <vector>
using namespace std;

void only_odd(int *arr)
{
    int res = arr[0];
    for (int i = 1; i < 11; i++)
    {
        cout << arr[i] << " ";
        res = (res ^ arr[i]);
    }
    cout << res;
}

int main()
{
    // your code here
    int arr[11] = {4, 2, 2, 4, 1, 4, 5, 1, 5, 4, 6};
    only_odd(arr);
    return 0;
}
