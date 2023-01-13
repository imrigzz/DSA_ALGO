#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> vec = {1, 2, 8, 7, 10};
    int mx = 1, curr = 1;
    for (int i = 1; i < vec.size(); i++)
    {
        if ((vec[i] % 2 == 0 && vec[i - 1] % 2 != 0) || (vec[i] % 2 != 0 && vec[i - 1] % 2 == 0))
        {
            curr++;
            mx = max(curr, mx);
        }
        else
        {
            curr = 1;
        }
    }
    cout << mx;
    return 0;
}
