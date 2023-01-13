// you can use includes, for example:
#include "bits/stdc++.h"
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
// https://algo.monster/problems/particle_velocity

int solution(vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    int Stable = 0;
    if (A.size() < 3)
    {
        return 0;
    }

    for (unsigned int i = 0; i < A.size() - 2; i++)
    {
        for (unsigned int j = i + 1; j <= A.size() - 1; j++)
        {
            if (A[j + 1] - A[j] == A[i + 1] - A[i])
            {
                Stable += 1;
            }
            else
            {
                break;
            }
        }
    }

    if (numStable < 1000000000)
    {
        return Stable;
    }
    else
    {
        return -1;
    }
}
