#include <iostream>
#include <string>
#include <vector>
using namespace std;

void func(void *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        cout << (*((int *)ptr) + i);
    }
}

int main()
{
    // your code here
    int arr[5] = {1, 2, 3, 4, 5};
    func(arr);

    return 0;
}
