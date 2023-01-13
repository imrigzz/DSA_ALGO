#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;

    // naive approach
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            cout << arr[i] << " ";
        }
    }

    // theta(n) traverse from reverse
    cout << "\nNext sloution\n";
    cout << arr[n - 1] << " ";
    int curr_leader = arr[n - 1];
    for (int i = n - 2; i >= 1; i--)
    {
        if (arr[i] > curr_leader)
        {
            cout << arr[i] << " ";
            curr_leader = arr[i];
        }
    }

    return 0;
}
