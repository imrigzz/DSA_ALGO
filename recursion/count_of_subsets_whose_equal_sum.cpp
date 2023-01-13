#include <iostream>
#include <string>
#include <vector>
using namespace std;

int subsets(vector<int> vec, int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }
    return subsets(vec, n - 1, sum) + subsets(vec, n - 1, (sum - vec[n - 1]));
    // we pass sum vriable, if sum varible becomes 0 we found subset
}

int main()
{
    // your code here
    vector<int> vec = {10, 20, 15};
    int sum = 25;
    cout << subsets(vec, vec.size(), sum);
    return 0;
}
