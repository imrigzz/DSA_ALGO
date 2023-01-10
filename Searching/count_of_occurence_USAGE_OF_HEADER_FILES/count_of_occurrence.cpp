#include <iostream>
#include <string>
#include <vector>

#include "count_of_occurence_header.h"

using namespace std;

int count_occurence(vector<int> vec, int x)
{
    int first = index_first(vec, x);
    // cout << first << endl;
    if (first == -1)
    {
        return 0;
    }
    int second = last_occurence(vec, x);
    // cout << second << endl;
    return second - first + 1;
}

int main()
{
    // your code here
    vector<int> vec = {10, 20, 20, 20, 40, 40};
    int x = 20;
    cout << count_occurence(vec, x);

    return 0;
}
