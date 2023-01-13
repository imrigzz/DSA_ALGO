#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int arr[] = {1, 1, 1, 2, 3, 3, 4, 4};
    int res = arr[0];
    for (int i = 1; i < 8; i++)
    {
        res = (res ^ arr[i]);
    }
    int x = res & (~(res - 1));
    int num1 = 0, num2 = 0;
    for (int i = 0; i < 8; i++)
    {
        if ((arr[i] & x) == 0)
        {
            num1 = num1 ^ arr[i];
        }
        else
        {
            num2 = num2 ^ arr[i];
        }
    }
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}
