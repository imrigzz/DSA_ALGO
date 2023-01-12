#include <iostream>
#include <string>
#include <vector>
using namespace std;

int median_two(vector<int> vec1, vector<int> vec2)
{
    int beg1 = 0;
    int end1 = vec1.size() - 1;
    while (beg1 <= end1)
    {
        int i1 = (beg1 + end1) / 2;
        int i2 = (vec1.size() + vec2.size() + 1) / 2 - i1;

        int min1 = (i1 == vec1.size()) ? INT32_MAX : vec1[i1];
        int max1 = (i2 == 0) ? INT32_MIN : vec1[i1 - 1];

        int min2 = (i1 == vec2.size()) ? INT32_MAX : vec2[i2];
        int max2 = (i2 == 0) ? INT32_MIN : vec2[i2 - 1];

        if (max1 <= min2 && max2 <= min1)
        {
            if ((vec1.size() + vec2.size()) % 2 == 0)
            {
                return ((double)max(max1, max2) + min(min1, min2)) / 2;
            }
            else
            {
                return (double)max(max1, max2);
            }
        }
        else if (max1 > min2)
        {
            end1 = i1 - 1;
        }
        else
        {
            beg1 = i1 + 1;
        }
    }
}
int main()
{
    // your code here
    vector<int> vec1 = {2, 8, 15, 20, 30};
    vector<int> vec2 = {7, 10, 12, 19, 21, 29, 32};
    cout << median_two(vec1, vec2);

    return 0;
}
