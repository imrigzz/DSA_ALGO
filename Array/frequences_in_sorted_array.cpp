#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int arr[] = {25, 30, 30};
    int count = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (arr[i] != arr[i - 1] && i != 0)
        {
            cout << count << endl;
            count = 0;
        }
        if (count == 0)
        {
            cout << arr[i] << " : ";
        }
        count++;
    }
    cout << count;
    return 0;
}
