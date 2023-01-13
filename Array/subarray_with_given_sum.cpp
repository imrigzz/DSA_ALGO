#include <iostream>
#include <string>
#include <vector>
using namespace std;

void weighted_sum()
{
    vector<int> vec = {2, 3, 5, 4, 6, 1};
    // weighted sun(0,2) = 1*2 + 2*3 + 3*5;
    vector<int> prefix;
    vector<int> weight;

    prefix.push_back(vec[0]);
    weight.push_back(1 * vec[0]);
    for (int i = 1; i < vec.size(); i++)
    {
        prefix.push_back(vec[i] + prefix[i - 1]);
        weight.push_back(((i + 1) * vec[i]) + (weight[i - 1]));
    }
    // get(0,2)
    cout << " weighted 0,2 is : " << weight[2];
}

int main()
{
    // your code here
    vector<int> vec = {3, 2, 0, 4, 7};
    int sum = 6;
    int curr_sum = 0;
    int window_size = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        window_size++;
        if (curr_sum == sum)
        {
            cout << "found" << endl;
            break;
        }

        curr_sum += vec[i];
        // cout << window_size << " : " << curr_sum << endl;
        while (curr_sum > sum)
        {
            curr_sum -= vec[i - (window_size - 1)];
        }
    }
    if (curr_sum != sum)
    {
        cout << "not found" << endl;
    }

    weighted_sum();

    return 0;
}
