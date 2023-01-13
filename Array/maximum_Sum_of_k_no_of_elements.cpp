#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> vec = {1, 2, -3, 4, 2, -1};

    int window_size = 0;
    int max_sum = INT32_MIN;
    int curr_sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        window_size++;
        if (window_size < 3)
        {
            curr_sum += vec[i];
            cout << "cs : " << curr_sum << endl;
        }
        else if (window_size == 3)
        {
            curr_sum += vec[i];
            cout << "cs : " << curr_sum << endl;
            max_sum = max(max_sum, curr_sum);
        }
        else
        {
            curr_sum += vec[i];
            window_size = window_size - 1;
            curr_sum -= vec[i - window_size];
            cout << "cs : " << curr_sum << endl;
            max_sum = max(max_sum, curr_sum);
        }
    }
    cout << max_sum;

    // simple
    cout << "\n\n\nSimple \n";
    vector<int> vecx = {1, 8, 30, -5, 20, 7};
    int k = 4;
    int curr = 0;
    int maxv = 0;

    // sum till first k
    for (int i = 0; i < k; i++)
    {
        curr += vecx[i];
    }

    // sliding window sum next element in array, remove first element in window
    maxv = max(maxv, curr);

    for (int i = k; i < vecx.size(); i++)
    {
        curr = curr - vecx[i - k] + vecx[i];
        maxv = max(maxv, curr);
    }

    cout << maxv;

    return 0;
}
