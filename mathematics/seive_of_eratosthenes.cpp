#include <iostream>
#include <string>
#include <vector>
using namespace std;

void seive_naive(int n)
{
    vector<bool> vec(n, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (vec[i] == true)
        {
            for (int j = i * 2; j <= n; j = j + i)
            {
                vec[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (vec[i] == true)
        {
            cout << i << " ";
        }
    }
}

void seive_opt(int n)
{
    vector<bool> vec(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (vec[i] == true)
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                vec[j] = false;
            }
        }
    }
}

int main()
{
    // your code here
    int n = 100;
    seive_naive(n);
    cout << endl;
    seive_opt(n);
    return 0;
}
