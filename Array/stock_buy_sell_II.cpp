#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    // code here
    int start = 0, end = 0;
    int profit = 0;
    vector<vector<int>> res;

    for (int i = 1; i < n; i++)
    {
        if ((A[i] - A[i - 1]) <= 0)
        {
            end = i - 1;
            if (profit > 0)
            {
                vector<int> v = {start, end};
                res.push_back(v);
                profit = 0;
            }
            start = i;
        }
        else
        {
            profit += A[i] - A[i - 1];
        }

        if (i == n - 1 && A[i] > A[i - 1])
        {
            end = i;
            vector<int> v = {start, end};
            res.push_back(v);
            profit = 0;
        }
    }

    return res;
}

int main()
{
    // your code here
    vector<int> A = {4, 2, 2, 2, 4};
    int n = A.size();
    vector<vector<int>> result;
    result = stockBuySell(A, n);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
