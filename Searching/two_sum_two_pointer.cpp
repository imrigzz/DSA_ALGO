#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool two_sum(vector<int> vec, int sum, int si) // starting index si is used for triplet remove during pair
{
    int i = si, j = vec.size() - 1;
    while (i < j)
    {
        if (vec[i] + vec[j] == sum)
        {
            cout << vec[i] << " " << vec[j] << " ";
            return true;
        }
        if (vec[i] + vec[j] < sum)
        {
            i++;
        }
        if (vec[i] + vec[j] > sum)
        {
            j--;
        }
    }
    return false;
}

// int main()
// {
//     // your code here
//     vector<int> vec = {2, 4, 8, 10, 12, 19, 20, 30};
//     int sum = 8;
//     cout << two_sum(vec, sum);
//     return 0;
// }
