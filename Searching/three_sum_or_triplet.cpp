#include <iostream>
#include <string>
#include <vector>
#include "two_sum_two_pointer.cpp"
using namespace std;

bool triplet(vector<int> vec, int sum)
{
    for (int i = 0; i < vec.size() - 2; i++)
    {
        bool trip = two_sum(vec, sum - vec[i], i + 1);
        // cout << trip << endl;
        if (trip == true)
        {
            cout << vec[i] << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    // your code here
    vector<int> vec = {2, 3, 4, 8, 9, 20, 40};
    int sum = 15;
    cout << triplet(vec, sum);
    return 0;
}
