#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> a = {10, 2, 3, 4, 5, 9, 7, 11};
    int largest = 0;
    int sec = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (largest < a[i])
        {
            sec = largest;
            largest = a[i];
        }
        else
        {
            if (sec < a[i])
            {
                sec = a[i];
            }
        }
    }
    cout << sec;
    return 0;
}
