#include <iostream>
#include <string>
#include <vector>
using namespace std;

int kdane(vector<int> vec)
{
    int res = vec[0];
    int max_ending = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        max_ending = max(max_ending + vec[i], vec[i]);
        res = max(max_ending, res);
    }
    return res;
}

void print_vec(vector<int> vec)
{
    cout << "Your vector is : ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    // your code here
    vector<int> vec = {8, -4, 3, -5, 4};
    int max_sum = 0;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        int current = 0;

        for (int j = i; j < n + i; j++)
        {
            int index = j % n;
            current += vec[index];
            max_sum = max(max_sum, current);
        }
    }

    cout << max_sum << endl;

    // best
    print_vec(vec);
    int maximum_sum = kdane(vec);
    cout << "kdane normal sum: " << maximum_sum << endl;

    if (maximum_sum < 0)
    {
        cout << maximum_sum << endl;
    }
    else
    {
        int total_sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            total_sum += vec[i];
            vec[i] = -vec[i];
        }
        cout << "total array sum: " << total_sum << endl;
        print_vec(vec);
        int minimum_sum_subarray = -kdane(vec);
        cout << "Minimum sum subarray : " << minimum_sum_subarray << endl;
        int circular_sum = total_sum - minimum_sum_subarray;
        cout << "Final circular sum : " << circular_sum << endl;
    }

    return 0;
}
